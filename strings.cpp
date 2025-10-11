#include <bits/stdc++.h>
using namespace std;

int main() {

  string message;

  cout << "Enter your message: ";
  getline(cin >> ws, message);
  string greet = "Hello";
  cout << message << endl;
  cout << "Message Capacity: " << message.capacity() << endl;
  cout << "Size: " << greet.size() << endl;
  cout << "Max Size: " << greet.max_size() << endl;
  cout << "Append: " << greet.append("!") << endl;

  return 0;
}