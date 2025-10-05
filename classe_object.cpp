#include <bits/stdc++.h>
using namespace std;

class Student {
public:
  string name;
  int className;
  int roll;
  double cgpa;

  Student(const string &n, int cls, int r, double g)
      : name(n), className(cls), roll(r), cgpa(g) {}

  Student() = default;

  void printInfo() const {
    cout << "\n--- Student Info ---\n";
    cout << "Name: " << name << endl;
    cout << "Class: " << className << endl;
    cout << "Roll: " << roll << endl;
    cout << "CGPA: " << cgpa << endl;
    cout << "\n--------------------\n";
  }
};

Student createStudent() {
  string name;
  int cls, roll;
  double cgpa;

  auto input = [&](const string &prompt, auto &var) {
    cout << prompt;
    cin >> var;
  };

  cout << "Enter student name: ";
  getline(cin >> ws, name);

  input("Enter student class: ", cls);
  input("Enter student roll: ", roll);
  input("Enter student cgpa: ", cgpa);

  return Student(name, cls, roll, cgpa);
}

int main() {
  Student shakil = createStudent();
  shakil.printInfo();

  Student pranto = createStudent();
  pranto.printInfo();

  return 0;
}
