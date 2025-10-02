#include <bits/stdc++.h>
using namespace std;

int main() {

  int n = 3;
  long long first;
  cin >> first;

  long long miniNum = first;
  long long maxiNum = first;

  for (int x = 1; x < n; x++) {
    long long i;
    cin >> i;
    maxiNum = max(maxiNum, i);
    miniNum = min(miniNum, i);
  }

  cout << miniNum << " " << maxiNum << endl;
  return 0;
}