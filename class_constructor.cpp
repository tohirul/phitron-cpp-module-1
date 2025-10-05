#include <bits/stdc++.h>
using namespace std;

class Student {
public:
  string studentName;
  int studentClass;
  int studentRoll;
  double studentGrade;

  Student(string &name, int className, int roll, double grade) {
    this->studentName = name;
    this->studentClass = className;
    this->studentRoll = roll;
    this->studentGrade = grade;
  }
};

int main() { return 0; }