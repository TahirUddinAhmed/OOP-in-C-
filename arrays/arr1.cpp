#include <iostream>
#include <string.h>
using namespace std;

int main() {
    // declare an array
    string cars[3] = {"BMW", "Velvo", "Innova"};

    // access a specific element
    cout<<"Access a specific element\n";
    cout<<cars[0]; // output: BMW 

    cout<<"Access the whole array"<<endl;
    for(int i = 0; i < 3; i++) {
        cout<<cars[i]<<" ";
    }
    cout<<endl;
    return 0;
}