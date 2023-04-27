#include <iostream>
using namespace std;

int main() {
    int i = 1, sum = 0;

    do {
       sum += i;  // sum = sum + 1
       i++;
    }while(i <= 10);


    cout<<"Sum = "<<sum<<endl;


    return 0;
}

// 1 to 10 