#include <bits/stdc++.h>
using namespace std;

int *dynamic_int() {

  int *x = new int;
  cout << "Enter value to store at dynamic memory: ";
  cin >> *x;
  return x;
}

int main() {

  int *a = dynamic_int();
  cout << "Dynamically Allocated value: " << *a << " stored at address " << a
       << endl;

  return 0;
}