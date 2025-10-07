#include <bits/stdc++.h>
using namespace std;

int main() {

  string num;
  cin >> num;

  string integer = num;
  string decimal;
  size_t pos = num.find('.');

  if (pos == string::npos) {
    cout << "int " << num << endl;
    return 0;
  }
  integer = num.substr(0, pos);
  decimal = num.substr(pos + 1);

  bool zeroDecimal = true;

  for (char c : decimal)
    if (c != '0') {
      zeroDecimal = false;
      break;
    }

  if (zeroDecimal)
    cout << "int" << " " << integer << endl;
  else
    cout << "float" << " " << integer << " " << string("0.") + decimal << endl;

  return 0;
}