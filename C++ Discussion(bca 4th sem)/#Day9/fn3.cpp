#include <iostream>
using namespace std;

//  with return type & with args
float area(float l, float b) {
    float ar = l * b;

    return ar;
}

int main() {
 int result = area(5.0, 6.0); 

 cout<<result;
 return 0;
}