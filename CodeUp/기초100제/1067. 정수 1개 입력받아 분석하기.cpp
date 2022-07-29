#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int a;

    cin >> a;

    if (a > 0)
        cout << ("plus\n");
    else
        cout << ("minus\n");

    if (a % 2 == 0)
        cout << ("even\n");
    else
        cout << ("odd\n");

    return 0;
}
