#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int a, b, c;
    int day = 1;

    cin >> a >> b >> c;

    while (day % a != 0 || day % b != 0 || day % c != 0)
        day++;
    cout << day;
    return 0;
}
