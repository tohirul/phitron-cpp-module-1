
#include <bits/stdc++.h>
using namespace std;

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  string s;
  s.reserve(n);
  cin >> s;

  sort(s.begin(), s.end());

  cout << s << endl;

  return 0;
}