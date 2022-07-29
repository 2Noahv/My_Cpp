#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    if (a % 2 == 0)
        cout << a << "\n";
    if (b % 2 == 0)
        cout << b << "\n";
    if (c % 2 == 0)
        cout << c;

    return 0;
}
