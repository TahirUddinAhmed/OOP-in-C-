#include <iostream>
using namespace std;

int add() {
    int a, b;
    a = 5;
    b = 2;
    int sum = a + b;
    
    return sum;
}


int main() {
  int hold;
  hold = add();
    // add();

  cout<<hold;
 return 0;
}