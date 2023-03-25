#include <iostream>
using namespace std;

int main() {
    cout<<"Hi there!"<<endl;
    string name;
    int age;

    cout<<"Enter your name here\n: ";
    cin>>name;
    cout<<"Enter your age\n: ";
    cin>>age;

    if(age >= 18) {
        cout<<"Hello, MR "<<name<<" Welcome to my world!"<<endl;
    } else {
        cout<<"Hello, "<<name<<" Welcome to my world!"<<endl;
    }
    return 0;
}
