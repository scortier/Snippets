
int multiprocessor_system(std::vector<int>&ability, int processes) {
    priority_queue<int, std::vector<int>>pq;
    for (int cap : ability) {
        pq.push(cap);
    }
    int time = 0, processed = 0;
    while (!pq.empty() && processed < processes) {
        int poll = pq.top();
        pq.pop();
        processed += poll;
        time++;
        if (poll / 2 > 0) pq.push(poll / 2);
    }
    return time;
}

//java code

public static int multiprocessorSystem(int[] ability, int num, int processes) {
    PriorityQueue<Integer> pq = new PriorityQueue<>((p1, p2) -> Integer.compare(p2, p1));
    for (int cap : ability) {
        pq.add(cap);
    }
    int time = 0, processed = 0;
    while (!pq.isEmpty() && processed < processes) {
        int poll = pq.poll();
        processed += poll;
        time++;
        if (poll / 2 > 0) pq.add(poll / 2);
    }
    return time;
}
