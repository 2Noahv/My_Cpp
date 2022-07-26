#include <iostream>

using std::cin;
using std::cout;

int main()
{
    char a[30] = {};

    cin >> a;

    for (int i = 0; i < 20; i++)
    {

        if (a[i] == 0)
            break;

        cout << "\'" << a[i] << "\'"
             << "\n";
    }

    return 0;
}