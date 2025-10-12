#include <bits/stdc++.h>
using namespace std;

int main() {
  set<char> vowels = {'a', 'e', 'i', 'o', 'u'};

  string str;

  cout << "Enter your string: ";
  getline(cin >> ws, str);

  int count = 0;
  for (string::iterator i = str.begin(); i != str.end(); i++) {
    cout << *i << endl;

    if (vowels.find(*i) != vowels.end())
      count += 1;
    else
      continue;
  }

  cout << "Vowel Count: " << count << endl;

  return 0;
}