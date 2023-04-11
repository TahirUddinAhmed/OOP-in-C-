#include <iostream>
using namespace std;

int main() {
    int num, rem;
    cout<<"Enter a positive number: ";
    cin>>num;


    cout<<"Reverse number= ";
    while(num != 0) {
        rem = num % 10;
        cout<<rem;
        num = num / 10;
    }

    cout<<endl;
    return 0;
}