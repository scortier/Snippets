/*
string builder same string m hi changes karta hai naaki har step m new string
bnata hai like normal string.
string builder functions
setCharAt(0,'d'); replace char at 0 by d
insert(2,'d') insert d at position 2
deleteCharAt(2); remove char at 2 index
append('g'); add at last
.length(); to get length

3

string builder contains a data so to convert that data into string we have to use
toString() function.

equals(s) to check equality of values in the object only
while == check both memory location and value of the object

        String s1 = new String("HELLO");
        String s2 = new String("HELLO");
        System.out.println(s1 == s2); // o/p:false
        System.out.println(s1.equals(s2));  // o/p:true
*/

#include<bits/stdc++.h>
using namespace std;

int main() {

	string s = "bcdbcdbcdbcdbcd";
	string t = "bcdbcd";
// cin>>s>>t;

	int n = t.size(), m = s.size();

	if (m % n)
	{
		cout << "-1\n";
		return 0;
	}

	while (n < m)
		t += t;

	//after changing t to match it like s if still s!=t or t bada hogya s so return -1.
	if (s != t || s.size() < t.size())
	{
		cout << "-1\n";
		return 0;
	}

// now s is equal to t
// check smallest substring
	string ans;
	for (int i = 1; i <= t.size(); i++)
	{
		if (t.size() % i != 0) continue;

		string h = t.substr(0, i);


		while (h.size() < t.size())
			h += h;

		if (t.size() == h.size() && t == h)
		{
			ans = t.substr(0, i);
			break;
		}
	}

	cout << ans << endl;
}

//

private static int getLength(String s, String t) {

	//if the length is not divisible then no point of checking further
	if (s.length() % t.length() > 0)
		return -1;

	StringBuilder sb = new StringBuilder();//generate mutable string

	/*example t=bcdbcd  s=bcdbcdbcdbcd
	so i will go from 0 to 2(s.size()/t.size())
		so sb will get appended by t 2 times
		hence
		sb=bcdbcdbcdbcd

	*/
	for (int i = 0; i * t.length() < s.length(); i++) {
		sb.append(t);
		System.out.println(sb);
	}
	//if sb is still not equal to s then return -1
	if (!sb.toString().equals(s))
		return -1;

	int divisible = 1;

	/*
	t=bcdbcd so t.length()==6
	*/
	for (int i = 1; i <= t.length(); i++) {

		//optimized solution for skipping a few unrequired iterations
		if (t.length() % divisible++ != 0) {
			continue;
		}


		sb = new StringBuilder();
		String subStr = t.substring(0, i);
		while (sb.length() < t.length()) {
			sb.append(subStr);
		}
		if (sb.toString().equals(t))
			return i;
	}
	return -1;
}

//to run on playground
// "static void main" must be defined in a public class.
public class Main {
	public static void main(String[] args) {
		System.out.println("Hello World!");

		String s = "bcdbcdbcdbcd";
		String t = "bcdbcd";

		//if the length is not divisible then no point of checking further
		if (s.length() % t.length() > 0)
		{	System.out.println("-1");
			return;
		}
		StringBuilder sb = new StringBuilder();//generate mutable string

		/*example t=bcdbcd  s=bcdbcdbcdbcd
		so i will go from 0 to 2(s.size()/t.size())
			so sb will get appended by t 2 times
			hence
			sb=bcdbcdbcdbcd

		*/
		for (int i = 0; i * t.length() < s.length(); i++) {
			sb.append(t);
			// System.out.println(sb);
		}
		//if sb is still not equal to s then return -1
		if (!sb.toString().equals(s))
		{	System.out.println("-1");
			return;
		}
		int divisible = 1;

		/*
		t=bcdbcd so t.length()==6
		*/
		for (int i = 1; i <= t.length(); i++) {

			//optimized solution for skipping a few unrequired iterations
			// if (t.length() % divisible++ != 0) {
			// 	continue;
			// }


			sb = new StringBuilder();
			String subStr = t.substring(0, i);
			while (sb.length() < t.length()) {
				sb.append(subStr);
				System.out.println(sb);

			}
			if (sb.toString().equals(t))
			{	System.out.println(i);
				return ;
				// System.out.println("\n");
			}

		}
		System.out.println("-1");

	}
}