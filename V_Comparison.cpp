#include <bits/stdc++.h>
using namespace std;

int main() {

  int first, second;
  char symbol;

  cin >> first >> symbol >> second;

  bool isRight = false;

  switch (symbol) {

  case '>':
    isRight = first > second;
    break;
  case '<':
    isRight = first < second;
    break;
  case '=':
    isRight = first == second;
    break;
  default:
    cout << "Wrong" << endl;
    return 0;
  }

  cout << (isRight ? "Right" : "Wrong") << endl;

  return 0;
}