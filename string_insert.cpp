#include <bits/stdc++.h>
using namespace std;

int main() {

  string str;

  cout << "Enter your string: ";
  getline(cin >> ws, str);

  str.insert(0, "Awesome ");

  cout << "Final String: " << str << endl;

  return 0;
}