
import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {
	public static void main(String[] args) throws java.lang.Exception {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while (t-- != 0) {
			int n = sc.nextInt();
			int k = sc.nextInt();
			int ar[] = new int[n];
			LinkedHashSet<Integer> hh1 = new LinkedHashSet<Integer>();

			int ssum = 0;
			for (int i = 0; i < n; i++) {
				ar[i] = sc.nextInt();
			}

			Arrays.sort(ar);
			hh1.add(ar[n - 1]);
			ssum = ar[n - 1];
			int zz = -1;
			for (int i = n - 2; i >= 0; i--) {
				LinkedHashSet<Integer>hh2 = new LinkedHashSet<Integer>();
				ssum = ssum + ar[i];
				Iterator ii1 = hh1.iterator();
				while (ii1.hasNext()) {
					int pp = (int)(ii1.next());
					hh2.add(pp);
					hh2.add(ar[i]);
					hh2.add(pp + ar[i]);
					if (((pp + ar[i]) >= k) && ((ssum - pp - ar[i]) >= k)) {
						zz = n - i;
						break;
					}
					if (((ar[i]) >= k) && ((ssum - ar[i]) >= k)) {
						zz = n - i;
						break;
					}
				}
				if (zz != -1) {
					break;
				}
				hh1 = hh2;
			}
			System.out.println(zz);
		}
	}
}