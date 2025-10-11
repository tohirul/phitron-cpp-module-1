#include <bits/stdc++.h>
using namespace std;

void swap(char *x, char *y) {
  cout << "Swap Position: " << *x << " " << *y << endl;
  char temp = *x;
  *x = *y;
  *y = temp;
}

int main() {

  string str;
  cout << "Enter a string: ";
  getline(cin >> ws, str);

  cout << "Output: " << str << endl;

  char first_c = str.front();
  char last_c = str.back();

  cout << "First Character: " << first_c << endl;
  cout << "Last Character: " << last_c << endl;

  swap(&str.front(), &str.back());

  cout << "Swapped String: " << str << endl;

  return 0;
}