int cut_off_rank(int cut_off, std::vector<int> scores) {
    // WRITE YOUR BRILLIANT CODE HERE
    sort(scores.begin(), scores.end());
    int total = 0, preScore = 0;
    for (int i = scores.size() - 1; i >= 0; i--) {
        int curScore = scores[i];
        if (preScore == curScore) {
            total++;
        } else {
            if (total >= cut_off) break;
            total++;
            preScore = curScore;
        }
    }
    return total;

}