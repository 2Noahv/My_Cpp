#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int i, a;
    int sum = 0;

    cin >> a;

    for (i = 1; i < a; i++)
    {
        sum += i;
        if (sum >= a)
            break;
    }
    cout << i;

    return 0;
}
