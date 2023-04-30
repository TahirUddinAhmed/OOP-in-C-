// by Ripunjoy
#include <iostream>
using namespace std;

void morning()
{
    cout << "Good Morning.";
}

void afternoon()
{
    cout << "Good Afternoon";
}

void night()
{
    cout << "Good Night. Have a sweet dream.";
}

int main()
{
    float time;
    cout << "What's time now [24 hour format: H:M] ? ";
    cin >> time;

    if (time >= 1.00 && time <= 11.59  )
    {
        morning();
    }
    else if (time >= 12.00 && time <= 18.00)
    {
        afternoon();
    }
    else
    {
        night();
    }
return 0;
}