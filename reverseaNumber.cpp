#include <iostream>
using namespace std;

int main() {
    int num, result;
    cout<<"Enter a positive number: ";
    cin>>num;


    cout<<"Reverse number= ";
    while(num != 0) {
        result = num % 10;
        cout<<result;
        num = num / 10; 
    }

    cout<<endl;
    return 0;
}


/*
let the number be 123

loop: 

round1: 
  result = 123 % 10   = 3       as the number 123 is integer value
  print-  3
  num = 123 / 10      = 12  

round2: 
  result = 12 % 10 = 2
  print - 32
  num = 12 / 10    = 1 

round3: 
  result = 1 % 10 = 1
  print  -   321 
  num = 1 / 10    = 0

  stop the loop 

  so the result is = 321

*/