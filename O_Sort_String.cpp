
#include <bits/stdc++.h>
using namespace std;

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  const int freq_len = 26;
  vector<int> freq(freq_len, 0);

  int ascii_a = int('a');

  for (int i = 0; i < n; i++) {
    char temp;
    cin >> temp;

    if (temp >= 'a' && temp <= 'z') {
      freq[temp - 'a']++;
    }
  }

  for (int i = 0; i < freq_len; i++) {
    cout << string(freq[i], 'a' + i);
  }

  cout << endl;

  return 0;
}
