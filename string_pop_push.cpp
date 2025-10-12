#include <bits/stdc++.h>
using namespace std;

int main() {

  string str;

  cout << "Enter a string: ";
  getline(cin >> ws, str);

  cout << "Output: " << str << endl;

  if (str.find('?')) {

    str.pop_back();
    str.push_back('!');
  }

  cout << "Fixed: " << str << endl;

  return 0;
}