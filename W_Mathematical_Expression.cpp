#include <bits/stdc++.h>
using namespace std;

int main() {

  int a, b, c;
  char o, q;

  cin >> a >> o >> b >> q >> c;

  switch (o) {

  case '+':
    if (a + b != c)
      cout << a + b << endl;
    else
      cout << "Yes" << endl;
    break;

  case '-':
    if (a - b != c)
      cout << a - b << endl;
    else
      cout << "Yes" << endl;
    break;

  case '*':
    if (a * b != c)
      cout << a * b << endl;
    else
      cout << "Yes" << endl;
    break;
  default:
    cout << "Yes" << endl;
    return 0;
  }

  return 0;
}