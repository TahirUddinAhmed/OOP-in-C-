// WAP to calculate the sum of first 10 natural number
#include <iostream>
using namespace std;

void addNatural(int n) {
    int i = 1, sum = 0;

    while(i <= n) {
        sum = sum + i;   // sum + i = 0 + 1 = 1
        i++; // 11
    }

    cout<<"\n\n\nTotal sum=  "<<sum<<endl;
}

int main() {
    int num;

    cout<<"Number eta di de: ";
    cin>>num;

    addNatural(num);    

    return 0;
}

// 1 2 3 4 5 6 7 8 9 10 
// = 1 + 2 + 3 + 4.... + 10 = 55