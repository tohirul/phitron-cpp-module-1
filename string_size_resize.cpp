#include <bits/stdc++.h>
using namespace std;

int main() {

  string st;

  cout << "Enter a string to measure: ";
  getline(cin >> ws, st);

  cout << "String Length: " << st.size() << endl;

  st.resize(floor((st.size() / 2)));
  cout << "Half String: " << st << " Length: " << st.size() << endl;

  return 0;
}
