// Given a matrix with r rows and c columns, find the maximum score of a path starting at [0, 0] and ending at [r - 1, c - 1]. The score of a path is the minimum value in that path. For example, the score of the path 8 → 4 → 5 → 9 is 4.

#include <iostream>
#include <string>
#include <vector>
#include <limits.h>
using namespace std;

int maxScore(vector<vector<int> >& grid) {
  if (grid.empty()) return 0;
  for (unsigned int i = 1; i < grid[0].size(); i++) {
    grid[0][i] = min(grid[0][i], grid[0][i - 1]);
  }
  for (unsigned int i = 1; i < grid.size(); i++) {
    grid[i][0] = min(grid[i][0], grid[i - 1][0]);
  }

  for (unsigned int i = 1; i < grid.size(); i++) {
    for (unsigned int j = 1; j < grid[0].size(); j++) {
      grid[i][j] = max(min(grid[i - 1][j], grid[i][j]), min(grid[i][j - 1], grid[i][j]));
    }
  }
  return grid[grid.size() - 1][grid[0].size() - 1];
}

int main()
{
  // Testing
  vector<vector<int>> grid1 {{5, 1}, {4, 5}};
  vector<vector<int> > grid2 {{5, 1, 7}, {4, 8, 5}};
  vector<vector<int> > grid3 {{1, 9, 9}, {9, 9, 9}, {9, 9, 9}};
  vector<vector<int> > grid4 {{10, 7, 3}, {12, 11, 9}, {1, 2, 8}};
  vector<vector<int> > grid5 {{20, 20, 3}, {20, 3, 20}, {3, 20, 20}};

  cout << "Max score should be 4: " << maxScore(grid1) << "\n";
  cout << "Max score should be 4: " << maxScore(grid2) << "\n";
  cout << "Max score should be 1: " << maxScore(grid3) << "\n";
  cout << "Max score should be 8: " << maxScore(grid4) << "\n";
  cout << "Max score should be 3: " << maxScore(grid5) << "\n";
}
