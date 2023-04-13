#include <iostream>
using namespace std;

int main()
{
    int a, b;
    a = 5;
    b = 2;
    cout << endl << "A=5 and B=2" << endl;
    cout << endl << "A==A\t";
    if (a == b)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    cout << "A<B\t";
    if (a < b)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    cout << "A>B\t";
    if (a > b)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    cout << "A!=B\t";
    if (a != b)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}