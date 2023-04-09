// int to char | char to int 
#include <iostream>
using namespace std;

int main() {
    char ch = 'r';   // a ASCII value 97
    // int num = ch; // implicit
    int num = (int)ch; // explicit


    cout<<"Value of num= "<<num<<endl;
    return 0;
}

// char ch = 'a';
// int num = ch;