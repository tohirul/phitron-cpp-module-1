#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  long long int maxNum = 0;
  for (int i = 0; i < n; i++) {
    long long x;
    cin >> x;
    maxNum = max(maxNum, x);
  }

  cout << maxNum << endl;
  return 0;
}