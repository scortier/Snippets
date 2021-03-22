/*
<<<<<<<<<<<---APPROACH-->>>>>>>>>>>>>>
The rand() function is used in C/C++ to generate random numbers in the range [0,
RAND_MAX).
*/
#include <bits/stdc++.h>
using namespace std;

void MultyDieRoll(int n) {
  for (int i = 1; i <= n; i++) {
    cout << rand() << endl;
  }
}

int32_t main() {
  int n;
  cout << "Enter the number :";
  cin >> n;
  MultyDieRoll(n);

  return 0;
}