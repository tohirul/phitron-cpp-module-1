#include <bits/stdc++.h>
#include <string>
using namespace std;

class Student {

public:
  string studentName;
  int studentClass;
  int studentRoll;
  double studentGrade;

  Student(const string &n, int cl, int roll, double cgpa)
      : studentName(n), studentClass(cl), studentRoll(roll),
        studentGrade(cgpa) {}

  Student() = default;

  void printInfo() const {
    cout << "\n--- Student Info ---\n";
    cout << endl;
    cout << "Name: " << this->studentName << endl;
    cout << "Class: " << this->studentClass << endl;
    cout << "Roll: " << this->studentRoll << endl;
    cout << "CGPA: " << this->studentGrade << endl;
    cout << "\n--------------------\n";
  }
};

Student *createStudent() {

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
  input("Enter student grade: ", cgpa);

  return new Student(name, cls, roll, cgpa);
};

int main() {

  Student *Tohir = createStudent();
  Tohir->printInfo();

  return 0;
}