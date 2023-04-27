#include <iostream>
using namespace std;

int main() {
    // char msg = 'Hello';  // hold 1 one
    string msg; // "hello"
    int n;

    cout<<"Enter your message: ";
    // cin>>msg;
    getline(cin, msg);
    cout<<"Enter a number: ";
    cin>>n;

    // for 
    for(int i = 1; i <= n; i++) {
        cout<<msg<<endl;
    }

    return 0;
}