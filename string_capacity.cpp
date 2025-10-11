#include <bits/stdc++.h>
using namespace std;

int main() {

  string st;
  cout << "Enter a string: ";
  getline(cin >> ws, st);

  long long int cap = st.capacity();

  cout << "Capacity: " << st.capacity() << endl;
  cout << "Max Size: " << st.max_size() << endl;
  cout << "Current Size: " << st.size() << endl;

  while (cap == st.capacity()) {

    string c;
    cout << "Add a new character to the string: ";
    getline(cin >> ws, c);

    st.append(c);
  }
  cout << "String: " << st << endl;
  cout << "Capacity: " << st.capacity() << endl;
  cout << "Max Size: " << st.max_size() << endl;
  cout << "Current Size: " << st.size() << endl;
  return 0;
}