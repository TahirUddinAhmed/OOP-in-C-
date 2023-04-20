#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter an operator(+, -, *, /): ";
    cin>>op;
    cout<<"Enter the second number: ";
    cin>>b;

    switch(op) {
        case '+':
          cout<<a+b<<endl;
          break;
        case '-':
          cout<<a-b<<endl;
          break;
        case '*':
          cout<<a*b<<endl;
          break;
        case '/':
          cout<<a/b<<endl;
          break;
        default: 
          cout<<"Enter a valid operator";
          break;
    }


    return 0;
}