#include <bits/stdc++.h>
using namespace std;

int main() {

  string str;

  cout << "Enter your string: ";
  getline(cin >> ws, str);

  str.replace(str.find("C++"), 3, "PY");

  cout << str << endl;
  return 0;
}