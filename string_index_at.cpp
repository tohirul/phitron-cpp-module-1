#include <bits/stdc++.h>
using namespace std;

int main() {

  string str;
  cout << "Enter a string: ";
  getline(cin >> ws, str);

  cout << "Index Method: ";
  for (int it = 0; it < str.size(); it++)
    cout << str[it];
  cout << endl;

  cout << "String Method: ";
  for (int it = 0; it < str.size(); it++)
    cout << str.at(it);
  cout << endl;
  return 0;
}