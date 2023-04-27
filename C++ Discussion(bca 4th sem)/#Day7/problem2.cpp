// WAP to display to first 20 odd number using for loop

// 1 to 20 
// 1 3 5 7 9 11 13 15 17 19 
//WAP to display first 20 odd number.

#include <iostream>
using namespace std;

int main() {
    int i;
    for ( i = 1; i <= 20; i++)
    {
        if(i%2!=0)
        cout << i << endl;
        i++;
    }
    
    return 0;
}





