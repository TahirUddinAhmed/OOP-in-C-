#include <iostream>
using namespace std;

int main()
{
    int age;
    char gender;

    cout <<endl<< "Enter your  age: ";
    cin >> age;
    cout << "Enter your gender.[M/F] : ";
    cin >> gender;

    if (gender == 'M' && age > 21)
    {
        cout << "You are eligible to apply licence.";
    }
    else if (gender == 'F' && age > 18 )
    {
        cout << "You are eligible to apply licence.";
    }
    else
    {
        cout << "Sorry, you can't apply for licence.";
    }

    return 0;
}