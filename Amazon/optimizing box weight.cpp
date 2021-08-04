
int main() {
    vector<int> w = {5, 3, 2, 4, 1, 2};
    sort(w.begin(), w.end());
    int n = w.size();
    int wSumA = 0, wSumB = 0, l = 0, r = n - 1;
    vector<int> res;
    while (l <= r) {
        if (wSumB + w[l] < wSumA) wSumB += w[l++];
        else wSumA += w[r], res.push_back(w[r--]);
    }
    reverse(res.begin(), res.end());
    for (auto a : res) cout << a << " ";
}


int main() {
    sort(a.begin(), a.end());
    int total = accumulate(a.begin(), a.end(), 0);
    int right_sum = 0;
    vector<int>res;
    int n = a.size() - 1;
    while (right_sum < total)
    {
        right_sum += a[n];
        total -= a[n];
        res.push_back(a[n]);
        n--;

    }
    return res;

}