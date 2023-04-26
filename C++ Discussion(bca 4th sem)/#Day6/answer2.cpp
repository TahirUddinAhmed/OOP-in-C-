#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter your age= ";
    cin >> age;
    char gender;
    cout << "your gender = ";
    cin >> gender;

    if (gender == 'm' && age > 21)
    {
        cout << "you are allow";
    } else if(gender == 'f' && age > 18) {
        cout<<"You are allow!";
    } else {
        cout<<"Sorry! you are not allowed";
    }

    return 0;
}





