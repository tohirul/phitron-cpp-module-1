#include <bits/stdc++.h>
using namespace std;

long long sum(long long n) {
  if (n == 0)
    return 0;
  return n + sum(n - 1);
}

int main() {

  long long num;
  cin >> num;

  long long out = sum(num);

  cout << out << endl;
  return 0;
}