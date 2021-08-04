/*
https://leetcode.com/discuss/interview-question/1023609/amazon-oa-shopping-options

  DP solution.
  Time Complexity: O(N^2), Space Complexity: O(N)
  Backtracking for this problem is ok but not efficien.
  We want to know how many way to buy each of different
  type of product without cost more than budget, we don't
  have to enumerate all possible combination of each products.
  So we can use DP to solve this problem.
  dp[0][i] means number of ways to pick one jeans and one shoes with total price i.
  if dp[0][i] == 0, it means there is no such combination.
  dp[1][i] means number of ways to pick one jeans, shoes, and skirts with total price i.
  if dp[1][i] == 0, it means no such combination.

  To find all possible ways of each price of combinaiton take O(N^2) times.
  and we have to 3 times, so total Time Complexity is O(N^2) * 3;
  We build two array with O(N) size, so Space Complexity is O(N) * 2.
  */
int getNumberOfOptions(vector<int> priceOfJeans, vector<int> priceOfShoes, vector<int> priceOfSkirts, vector<int> priceOfTops, int dollars) {
    sort(begin(priceOfJeans), end(priceOfJeans));
    sort(begin(priceOfShoes), end(priceOfShoes));
    sort(begin(priceOfSkirts), end(priceOfSkirts));
    sort(begin(priceOfTops), end(priceOfTops));

    vector<vector<int>> dp(2, vector<int>(dollars + 1, 0));
    int res = 0;



    // jeans, shoes
    for (int i = 0; i < priceOfJeans.size(); i++) {
        for (int j = 0; j < priceOfShoes.size(); j++) {
            int sum = priceOfJeans[i] + priceOfShoes[j];
            if (sum < dollars - 1)
                dp[0][sum]++;
            else break;
        }
    }

    // jeans, shoes, and skirts
    for (int i = 0; i < priceOfSkirts.size(); i++) {
        for (int j = 1; j < dollars - 1; j++) {
            if (dp[0][j] == 0) continue;
            int sum = priceOfSkirts[i] + j;
            if (sum < dollars)
                dp[1][sum] += dp[0][j];
            else break;
        }
    }

    // jeans, shoes, skirts, and top.
    for (int i = 0; i < priceOfTops.size(); i++) {
        for (int j = 1; j < dollars; j++) {
            if (dp[1][j] == 0) continue;
            int sum = priceOfTops[i] + j;
            if (sum <= dollars)
                res += dp[1][j];
            else break;
        }
    }

    return res;
}


/*
    backtracking with pruning.
    If current price plus previous product's price is less than dollars,
    this combination of products can be valid and we have to call DFS to
    keep check this sum of price with next product.
    If the sum of products larger than dollar, we can break it
    because rest of product's price are larger than this one.
    */

int getNumberOfOptions2(vector<int> priceOfJeans, vector<int> priceOfShoes, vector<int> priceOfSkirts, vector<int> priceOfTops, int dollars) {
    sort(begin(priceOfJeans), end(priceOfJeans));
    sort(begin(priceOfShoes), end(priceOfShoes));
    sort(begin(priceOfSkirts), end(priceOfSkirts));
    sort(begin(priceOfTops), end(priceOfTops));

    int res = 0;


    function<void(int, int)> DFS = [&](int idx, int n) {
        int sum = 0;
        if (idx == 0) {
            for (int i = 0; i < priceOfJeans.size(); i++) {
                sum = n + priceOfJeans[i];
                if (sum < dollars - 2)
                    DFS(idx + 1, sum);
                else break;
            }
        }
        else if (idx == 1) {
            for (int i = 0; i < priceOfShoes.size(); i++) {
                sum = n + priceOfShoes[i];
                if (sum < dollars - 1)
                    DFS(idx + 1, sum);
                else break;
            }
        }
        else if (idx == 2) {
            for (int i = 0; i < priceOfSkirts.size(); i++) {
                sum = n + priceOfSkirts[i];
                if (sum < dollars)
                    DFS(idx + 1, sum);
                else break;
            }
        }
        else {
            for (int i = 0; i < priceOfTops.size(); i++) {
                sum = n + priceOfTops[i];
                if (sum <= dollars)
                    res++;
                else break;
            }
        }
    };

    DFS(0, 0);

    return res;
}


/*
    Backtracking with pruning and iterative way.
    */

int getNumberOfOptions3(vector<int> priceOfJeans, vector<int> priceOfShoes, vector<int> priceOfSkirts, vector<int> priceOfTops, int dollars) {
    sort(begin(priceOfJeans), end(priceOfJeans));
    sort(begin(priceOfShoes), end(priceOfShoes));
    sort(begin(priceOfSkirts), end(priceOfSkirts));
    sort(begin(priceOfTops), end(priceOfTops));

    int res = 0;


    for (int n1 : priceOfJeans) {
        if (n1 >= dollars - 2) break;
        for (int n2 : priceOfShoes) {
            if (n1 + n2 >= dollars - 1) break;
            for (int n3 : priceOfSkirts) {
                if (n1 + n2 + n3 >= dollars) break;
                for (int n4 : priceOfTops) {
                    if (n1 + n2 + n3 + n4 > dollars) break;
                    res++;
                }
            }
        }
    }

    return res;
}

int main() {
    vector<int> jeans = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54
                         , 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103
                        };
    vector<int> shoes = {92, 24, 81, 57, 33, 85, 10, 80, 7, 91, 97, 46, 61, 18, 22, 101, 6, 39, 96, 83, 45, 64, 95, 32, 17, 30, 77, 82, 56, 34, 31, 9, 20, 19, 11, 58, 88, 1, 3, 100, 52, 41, 94, 42, 38, 59, 63, 47, 16, 99, 50, 51
                         , 90, 53, 21, 25, 84, 55, 79, 65, 89, 27, 74, 4, 28, 5, 67, 26, 48, 36, 98, 43, 87, 35, 12, 102, 60, 37, 54, 8, 23, 72, 93, 29, 86, 62, 2, 49, 69, 14, 40, 76, 78, 44, 103, 71, 66, 68, 73, 75, 15, 70, 13
                        };
    vector<int> skirts = {2, 3};
    vector<int> tops = {1, 2};
    int dollars = 109;

    // int res = getNumberOfOptions(jeans,shoes,skirts,tops,dollars);
    // int res = getNumberOfOptions2(jeans,shoes,skirts,tops,dollars);
    // int res = getNumberOfOptions(jeans,jeans,jeans,jeans,dollars);
    // int res = getNumberOfOptions2(jeans,jeans,jeans,jeans,dollars);
    // int res = getNumberOfOptions2(shoes,shoes,shoes,shoes,dollars);
    // int res = getNumberOfOptions(shoes,shoes,shoes,shoes,dollars);
    // int res = getNumberOfOptions3(shoes,shoes,shoes,shoes,dollars);

    cout << res << endl;
}


//TC :0(N^2 LOG(N))

int getNumberOfOptions(vector priceOfJeans, vector priceOfShoes, vector priceOfSkirts, vector priceOfTops, int dollars)
{

    vector<int> JeansandShoes, SkirtAndTop ;

    for (auto jeans : priceOfJeans)
        for ( auto shoes : priceOfShoes)
            JeansandShoes.push_back(jeans + shoes);

    for (auto skirt : priceOfSkirts)
        for ( auto top : priceOfTops)
            SkirtAndTop.push_back(skirt + top);

    sort(JeansandShoes.begin(), JeansandShoes.end());
    sort(SkirtAndTop.begin(), SkirtAndTop.end(), greater<int>());

    int result = 0, remaining = 0, currentIndex = 0;

    for ( auto JSPair : JeansandShoes) {
        remaining = dollars - JSPair;
        while (currentIndex < SkirtAndTop.size() && SkirtAndTop[currentIndex] > remaining)
            currentIndex += 1;
        if (currentIndex == SkirtAndTop.size())
            break;
        result += (SkirtAndTop.size() - currentIndex);
    }
    return result;
}