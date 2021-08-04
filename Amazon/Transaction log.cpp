std::vector<std::string> get_user_ids(std::vector<std::string> uid, int threshold) {
    // WRITE YOUR BRILLIANT CODE HERE
    vector<string> result;
    unordered_map <string, int> ump;
    vector<string> temp;
    int idx;
    string word;
    for (idx = 0; idx < uid.size(); idx++) {
        stringstream ss(uid[idx]);
        while (ss >> word) {
            temp.push_back(word);
        }
        if (temp[0] != temp[1]) {
            ump[temp[0]]++;
            ump[temp[1]]++;
        }
        else
            ump[temp[0]]++;
        temp.clear();
    }
    for (auto &i1 : ump) {
        if (i1.second >= threshold)
            result.push_back(i1.first);
    }

    sort(result.begin(), result.end());

    return result;
}