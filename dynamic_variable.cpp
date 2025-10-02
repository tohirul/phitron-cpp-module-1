#include <bits/stdc++.h>
using namespace std;

int *create_dynamic_variable() {

  int *p = new int;
  cout << "Enter the number: ";
  cin >> *p;

  return p;
}

int main() {

  int *x = create_dynamic_variable();
  cout << "Dynamic Variable Address: " << x << endl;
  cout << "Dynamic Variable Value: " << *x << endl;
  return 0;
}