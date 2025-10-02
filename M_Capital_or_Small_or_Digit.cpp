#include <bits/stdc++.h>
using namespace std;

int main() {

  char X;
  cin >> X;

  if (int(X) >= 48 && int(X) <= 57) {
    cout << "IS DIGIT" << endl;
  } else {
    cout << "ALPHA" << endl;
    if (int(X) >= 65 && int(X) <= 90) {
      cout << "IS CAPITAL" << endl;
    } else {
      cout << "IS SMALL" << endl;
    }
  }

  return 0;
}