// WAP to add two number 
#include <iostream>
using namespace std;

void add() {
    int a, b, sum = 0;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    
    sum = a + b;

    cout<<"Sum is "<<sum<<endl;
}

int main() {
 add();
 

 return 0;
}

// enter the first number: 5
// enter operator(+, -, /, *): +
// enter the second number: 10

// switch(op) {
//     case '+':
//        add();
//        break;
//     case '-':
//         sub();
//         break;
//     case '*':
//        mul();
//        break;
// }

