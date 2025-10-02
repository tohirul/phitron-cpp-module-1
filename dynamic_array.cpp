#include <bits/stdc++.h>
using namespace std;

int *create_dynamic_array(int rep) {

  int *arr = new int[rep];
  cout << "Enter numbers in the array: " << endl;
  for (int i = 0; i < rep; i++) {
    cin >> arr[i];
  }
  cout << "Array Address from func: " << arr << endl;
  return arr;
}

int main() {
  int rep;

  cout << "Enter the array lenght: ";
  cin >> rep;

  int *dynamic_array = create_dynamic_array(rep);
  cout << "Array Address: " << dynamic_array << endl;
  cout << "Dynamic Array: " << endl;
  for (int i = 0; i < rep; i++) {
    cout << dynamic_array[i] << endl;
  }

  return 0;
}