#include <bits/stdc++.h>
using namespace std;

int main() {
  string st;

  cout << "Enter a string: ";
  getline(cin, st);

  cout << "Output: ";
  if (st.empty())

    cout << "Empty String" << endl;

  else
    cout << "String Size " << st.size() << endl;

  return 0;
}