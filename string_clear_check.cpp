#include <bits/stdc++.h>
using namespace std;

int main() {

  string st;

  cout << "Enter a string to check: ";
  getline(cin >> ws, st);

  cout << "Output: " << st << endl;

  st.clear();
  cout << "Output: " << (st.size() ? st : "Empty String") << endl;

  return 0;
}