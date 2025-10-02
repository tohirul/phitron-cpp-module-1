
#include <bits/stdc++.h>
using namespace std;

int *create_array(int n) {
  int *arr = new int[n];

  for (int x = 0; x < n; x++) {
    cin >> arr[x];
  }

  return arr;
}

int main() {

  int n;
  cin >> n;

  int *arr = create_array(n);

  // selection sorting looop
  for (int x = 0; x < n; x++) {
    int min = x;
    for (int y = x + 1; y < n; y++) {
      if (arr[y] < arr[min])
        min = y;
      else
        continue;
    }
    if (min != x) {
      swap(arr[x], arr[min]);
    } else
      continue;
  }

  for (int x = 0; x < n; x++) {
    cout << arr[x] << " ";
  }
  delete[] arr;
  return 0;
}