
//CPP
int earliest_time(int numOfBuildings, vector<int>& buildingOpenTime, vector<int>& offloadTime) {
    priority_queue<int, std::vector<int>>loads;
    priority_queue<int, std::vector<int>>docks;
    for (auto x : offloadTime)
        loads.push(x);
    for (auto y : buildingOpenTime)
        docks.push(y);
    int maxm = 0;
    while (!docks.empty()) {
// Starting time of each building
        int poll = docks.top();
        docks.pop();
        for (int i = 0; i < 4 && !loads.empty(); i++) {
//Unload the 4 loads, and get the max time to finish all the loads to the building.
            int z = poll + loads.top();
            loads.pop();
            maxm = max(maxm, z);
        }

    }

    return maxm - 2;
}




//JAVA
private static int earliestTime(int numOfBuildings, int[] buildingOpenTime, int[] offloadTime) {
    PriorityQueue<Integer> loads = new PriorityQueue<>((v1, v2) -> Integer.compare(v2, v1));
    PriorityQueue<Integer> docks = new PriorityQueue<>((v1, v2) -> Integer.compare(v1, v2));
    Arrays.stream(offloadTime).forEach(loads::add);
    Arrays.stream(buildingOpenTime).forEach(docks::add);
    int max = 0;
    while (!docks.isEmpty()) {
//Starting time of each building
        int poll = docks.poll();
        for (int i = 0; i < 4 && !loads.isEmpty(); i++) {
// Unload the 4 loads, and get the max time to finish all the loads to the building.
            max = Math.max(max, poll + loads.poll());
        }
    }
    return max;
}
return 0;
}