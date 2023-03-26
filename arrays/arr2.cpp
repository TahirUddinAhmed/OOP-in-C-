#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter how many student are there ?\n: ";
    cin>>n;

    // declaring an array
    int roll[n];

    // getting data
    for(int i = 0; i < n; i++) {
        cout<<"Enter student "<< i << " roll\n: ";
        cin>>roll[i];
        cout<<endl;
    }

    // display data
    cout<<"Roll numbers are:- \n";
    for(int i = 0; i < n; i++) {
        cout<<roll[i]<<"  ";
    }
    cout<<endl;
    return 0;
}