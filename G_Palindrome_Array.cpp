#include <bits/stdc++.h>
using namespace std;

bool isPalindromeArray(int *arr, int n) {

  if (n <= 1)
    return true;

  for (int i = 0; i < floor(n / 2); i++)
    if (arr[i] != arr[n - 1 - i])
      return false;

  return true;
}

int main() {

  int n;
  cin >> n;
  int nums[n];

  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  bool palindrome = isPalindromeArray(nums, n);
  cout << (palindrome ? "YES" : "NO") << endl;

  return 0;
}