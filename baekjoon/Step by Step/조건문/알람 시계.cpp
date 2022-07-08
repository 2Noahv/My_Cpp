#include <iostream>

using std::cin;
using std::cout;

int main()
{

    int hour, minute;

    cin >> hour >> minute;

    if (minute < 45)
    {
        minute += 15;
        hour--;
        if (hour < 0)
        {
            hour = 23;
        }
    }

    else
    {
        minute -= 45;
    }

    cout << hour << " " << minute;

    return 0;
}