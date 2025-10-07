#include <bits/stdc++.h>
using namespace std;

int main() {

  int first, second;
  char op;

  cin >> first >> op >> second;

  switch (op) {

  case '+':
    cout << first + second << endl;
    break;
  case '-':
    cout << first - second << endl;
    break;
  case '*':
    cout << first * second << endl;
    break;
  case '/':
    cout << first / second << endl;
    break;

  default:
    cout << first % second << endl;
  }

  return 0;
}