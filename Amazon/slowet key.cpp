char slowestKey(vector<int>& times, string &keys) {
    int prev_time = times[0], maxm = prev_time;
    char maxmChar = keys[0];
    for (int i = 1; i < times.size(); i++) {
        int cur = times[i];
        if (cur - prev_time > maxm || (cur - prev_time == maxm && keys[i] > maxmChar)) {
            maxmChar = keys[i];
            maxm = cur - prev_time;
        }
        prev_time = cur;
    }
    return maxmChar;
}