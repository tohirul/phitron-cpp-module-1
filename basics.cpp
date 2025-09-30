#include <iostream>
using namespace std;

int main() {

  char username[100];
   
  cout << "Enter Your Name: ";
  cin >> username;
  cout << "Hello " << username << "! " << endl;

  int userAge;
  cout << "How old are you?" << endl;

  cin >> userAge;

  cout << "You are " << userAge << " years old." << endl;

  if(userAge < 18){
    cout << "You can't drive."<<endl;
  }
  else {
    cout << "You should drive."<< endl;
  }

  return 0;
}