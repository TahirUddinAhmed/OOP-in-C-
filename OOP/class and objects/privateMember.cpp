#include <iostream>
using namespace std;

class Sample {
 int number;
 void read(); // private member function
 
 public:
  void update();
  void write();

};

void Sample::write() {
 cout<<"Enter a number\n: ";
 cin>>number;
}

void Sample::read() {
  cout<<"your number is : "<<number<<endl;                                                   
}

void Sample::update() {
  read();
}

int main() {
 Sample s1;
//  s1.read(); // won't work: because read() is a private memeber function
 s1.write();
 s1.update();
 return 0;
}