#include <bits/stdc++.h>

using namespace std;

int main() {

  string str;

  cout << "Enter a string: ";
  getline(cin >> ws, str);

  for (string::iterator it = str.begin(); it != str.end(); ++it) {

    cout << (*it) << endl;
  }

  return 0;
}