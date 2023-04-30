// by ripunjoy
#include <iostream>
using namespace std;

void add(int a, int b, int c)
{

    int mul = a * b * c;

    cout << "Multiplication of these number is: " << mul << endl;
}

int main()
{
    int a, b, c, mul;
    cout << "Enter the 1st number: ";
    cin >> a;
    cout << "Enter the 2nd number: ";
    cin >> b;
    cout << "Enter the 3rd number: ";
    cin >> c;
    add(a, b, c);

    return 0;
}