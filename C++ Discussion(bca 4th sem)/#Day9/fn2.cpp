#include <iostream>
using namespace std;

// no return type & with args
void add(int a, int b) { // arguments
    int c = a + b;

    cout<<"result = "<<c<<endl;
}


int main() {
 
//  add(5, 15); // parameter
  int a, b;
  cout<<"Enter first number: ";
  cin>>a;
  cout<<"Enter the second number: ";
  cin>>b;

  add(a, b);


 return 0;
}