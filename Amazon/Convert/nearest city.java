import java.util.*;
import java.io.*;

/**
 * Created on:  Jan 12, 2021
 * Questions: https://leetcode.com/discuss/interview-question/872961/Amazon-or-OA-2020-or-Nearest-City
 */

public class NearestCity {

    public static void main(String[] args) {
//        System.out.println(Arrays.toString(findNearestCities(3, new String[]{"c1", "c2", "c3"}, new int[]{3, 2, 1}, new int[]{3, 2, 3}, 3,
//                new String[]{"c1", "c2", "c3"})));
//        System.out.println(Arrays.toString(findNearestCities(5, new String[]{"p1", "p2", "p3", "p4", "p5"}, new int[]{10, 20, 30, 40, 50},
//                new int[]{10, 20, 30, 40, 50}, 5, new String[]{"p1", "p2", "p3", "p4", "p5"})));
//        System.out.println(Arrays.toString(findNearestCities(5, new String[]{"p1", "p2", "p3", "p4", "p5"}, new int[]{10, 20, 10, 40, 50},
//                new int[]{10, 20, 10, 10, 50}, 5, new String[]{"p1", "p2", "p3", "p4", "p5"})));

        System.out.println(Arrays.toString(findNearestCities(6, new String[] {"green", "yellow", "red", "blue", "grey", "pink"}, new int[] {10, 20, 15, 30, 10, 15},
                                           new int[] {30, 25, 30, 40, 25, 25}, 4, new String[] {"grey", "blue", "red", "pink"})));
    }

    public static String[] findNearestCities(int numOfCities, String[] points, int[] xCoordinates, int[] yCoordinates,
            int numOfQueriedPoints, String[] queries) {
        Map<Integer, TreeSet<City>> x = new HashMap<>(), y = new HashMap<>();
        Comparator<City> xSort = (c1, c2) -> c1.y == c2.y ? c1.name.compareTo(c2.name) : Integer.compare(c1.y, c2.y);
        Comparator<City> ySort = (c1, c2) -> c1.x == c2.x ? c1.name.compareTo(c2.name) : Integer.compare(c1.x, c2.x);
        Map<String, City> map = new HashMap<>();
        for (int i = 0; i < numOfCities; i++) {
            City city = new City(points[i], xCoordinates[i], yCoordinates[i]);
            x.computeIfAbsent(xCoordinates[i], val -> new TreeSet<>(xSort)).add(city);
            y.computeIfAbsent(yCoordinates[i], val -> new TreeSet<>(ySort)).add(city);
            map.put(city.name, city);
        }
        Map<String, String> closest = new HashMap<>();
        String[] result = new String[numOfQueriedPoints];
        int i = 0;
        for (String city : queries) {
            result[i++] = getClosest(map.get(city), closest, x, y);
        }
        return result;
    }

    private static String getClosest(City city, Map<String, String> closest, Map<Integer, TreeSet<City>> x, Map<Integer, TreeSet<City>> y) {
        if (closest.containsKey(city.name)) return closest.get(city.name);
        TreeSet<City> xC = x.get(city.x);
        TreeSet<City> yC = y.get(city.y);
        City x1 = xC == null ? null : xC.lower(city), x2 = xC == null ? null : xC.higher(city);
        City y1 = yC == null ? null : yC.lower(city), y2 = yC == null ? null : yC.higher(city);
        String curClosest = getClosest(city, x1, x2, y1, y2);
        closest.put(city.name, curClosest);
        return curClosest;
    }

    private static String getClosest(City cur, City... city) {
        String result = null;
        long dist = Long.MAX_VALUE;
//        Loop through all the x & y coordinates.
        for (City dest : city) {
            if (dest == null) continue;
            long curDist = getDistance(cur, dest);
            if (curDist < dist || (curDist == dist && result != null && result.compareTo(dest.name) > 0)) {
                dist = curDist;
                result = dest.name;
            }
        }
        return result;
    }

    private static long getDistance(City a, City b) {
        return Math.abs((long) (a.x - b.x) * (a.x - b.x) + (long) (a.y - b.y) * (a.y - b.y));
    }

    static class City {
        String name;
        int x, y;

        public City(String name, int x, int y) {
            this.name = name;
            this.x = x;
            this.y = y;
        }
    }
}



/////////////////////////

// package leetcode.amazon;

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

    public static void main(String[] args) {
        String[] points = new String[] {"p1", "p2", "p3"};
        int[] xCoo = new int[] {30, 20, 10};
        int[] yCoo = new int[] {30, 20, 30};
        String[] queries = new String[] {"p1", "p2", "p3"};
        int n = 3;
        System.out.println(Arrays.toString(findNearest(points, xCoo, yCoo, queries, n)));

    }

}