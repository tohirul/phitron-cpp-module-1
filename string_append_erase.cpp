#include <bits/stdc++.h>
using namespace std;

int main() {

  string first, second;

  cout << "Enter first string: ";
  getline(cin >> ws, first);

  cout << "Enter second string: ";
  getline(cin >> ws, second);

  first.append(" " + second);

  cout << "Concatenated String: " << first << endl;

  first.erase(first.size() - 3);

  cout << "Erased String: " << first << endl;

  return 0;
}