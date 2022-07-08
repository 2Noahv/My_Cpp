#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int hour, minute, cookm;
    int new_h, new_m;

    cin >> hour >> minute;
    cin >> cookm;

    if (minute + cookm < 60)
    {
        new_h = hour;
        new_m = minute + cookm;
    }

    else
    {
        new_h = (hour + ((minute + cookm) / 60)) % 24;

        new_m = (minute + cookm) % 60;
    }

    cout << new_h << " " << new_m;

    return 0;
}