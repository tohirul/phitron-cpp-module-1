#include <bits/stdc++.h>
using namespace std;

void st_swap(char *x, char *y) {

  char temp = *x;
  *x = *y;
  *y = temp;
}

int main() {

  string st;

  cout << "Enter a string: ";
  getline(cin >> ws, st);

  for (int it = 0; it < floor(st.size() / 2); it++) {

    st_swap(&st.at(it), &st.at(st.size() - it - 1));
  }
  cout << "Reverse String: " << st << endl;
  return 0;
}