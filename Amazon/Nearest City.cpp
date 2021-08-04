package leetcode.amazon;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;

//https://leetcode.com/discuss/interview-question/949904/Amazonor-OA2-or-Nearest-City
public class NearestCity {

	public static String[] findNearest(String[] points, int[] xCoo, int[] yCoo, String[] queries, int n) {

		HashMap<Integer, List<String>> xToPoint = new HashMap<>(); // maps from x coordinate to points
		HashMap<Integer, List<String>> yToPoint = new HashMap<>(); // maps from y coordinate to points
		HashMap<String, Integer> pointToIdx = new HashMap<>(); // maps each point name to its index

		// initialize maps
		for (int i = 0 ; i < n ; i++) {
			if (!xToPoint.containsKey(xCoo[i])) xToPoint.put(xCoo[i], new ArrayList<String>());
			xToPoint.get(xCoo[i]).add(points[i]);

			if (!yToPoint.containsKey(yCoo[i])) yToPoint.put(yCoo[i], new ArrayList<String>());
			yToPoint.get(yCoo[i]).add(points[i]);

			pointToIdx.put(points[i], i);
		}

		// array to hold the result for queries
		String[] result = new String[queries.length];
		for (int i = 0 ; i < result.length ; i++) { // for each query q
			String q = queries[i];
			int qIdx = pointToIdx.get(q);
			List<String> xNbors = xToPoint.get(xCoo[qIdx]);
			List<String> yNbors = yToPoint.get(yCoo[qIdx]);
			// if there is no neighbour, skip
			if (xNbors.size() == 1 && yNbors.size() == 1) continue;
			int minDist = Integer.MAX_VALUE;
			String min = "";
			// get neigbours from x coordinate and update min
			for (String string : xNbors) {
				if (string.equals(q)) continue;
				int dist = dist(q, string, pointToIdx, xCoo, yCoo);
				if (dist < minDist) {
					minDist = dist;
					min = string;
				}
			}
			// get neigbours from y coordinate and update min
			for (String string : yNbors) {
				if (string.equals(q)) continue;
				int dist = dist(q, string, pointToIdx, xCoo, yCoo);
				if (dist < minDist) {
					minDist = dist;
					min = string;
				}
			}
			result[i] = min;
		}
		return result;
	}

	private static int dist(String q, String string, HashMap<String, Integer> pointToIdx, int[] xCoo, int[] yCoo) {
		int qIdx = pointToIdx.get(q);
		int stIdx = pointToIdx.get(string);
		return Math.abs(xCoo[qIdx] - xCoo[stIdx]) + Math.abs(yCoo[qIdx] - yCoo[stIdx]);
	}

	public static void main(string args) {
		String[] points = new String[] {"p1", "p2", "p3", "p4", "p5"};
		int[] xCoo = new int[] {40, 20, 20, 40, 40};
		int[] yCoo = new int[] {10, 40, 30, 40, 30};
		String[] queries = new String[] {"p1", "p2", "p3", "p4", "p5"};
		int n = 5;
		System.out.println(Arrays.toString(findNearest(points, xCoo, yCoo, queries, n)));

	}

}