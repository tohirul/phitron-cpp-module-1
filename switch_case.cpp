#include <iostream>
using namespace std;

int main() {

  int age;
  cout << "Enter you age: ";
  cin >> age;

  switch (age % 2) {
  case 0:
    cout << "Even" << endl;
    break;
  case 1:
    cout << "Odd" << endl;
    break;
  }

  char letter;
  cout << "Enter letter to check: ";
  cin >> letter;

  switch (letter) {
  case 'a':
    cout << "Vowel" << endl;
    break;
  case 'e':
    cout << "Vowel" << endl;
    break;
  case 'i':
    cout << "Vowel" << endl;
    break;
  case 'o':
    cout << "Vowel" << endl;
    break;
  case 'u':
    cout << "Vowel" << endl;
    break;
  default:
    cout << "Consonent" << endl;
  }

  return 0;
}