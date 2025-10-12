#include <bits/stdc++.h>
using namespace std;

int main() {

  string str;

  cout << "Enter your string: ";
  getline(cin >> ws, str);

  for (string::reverse_iterator i = str.rbegin(); i != str.rend(); i++)
    cout << *i << endl;

  return 0;
}