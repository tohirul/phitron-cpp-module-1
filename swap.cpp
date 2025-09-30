#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void assignValue(int *x, string position) {

  cout << "Enter the " << position << " number: ";
  cin >> *x;
  return;
};

void swapValue(int *x, int *y) {

  int temp = *x;
  *x = *y;
  *y = temp;
  return;
};

int main() {

  int a, b;

  assignValue(&a, "first");
  assignValue(&b, "second");

  cout << "First: " << a << endl;
  cout << "Second: " << b << endl;

  swapValue(&a, &b);

  cout << "First: " << a << endl;
  cout << "Second: " << b << endl;

  return 0;
}