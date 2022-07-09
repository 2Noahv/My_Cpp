#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int st;

    cin >> st;

    for (int i = 0; i < st; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}