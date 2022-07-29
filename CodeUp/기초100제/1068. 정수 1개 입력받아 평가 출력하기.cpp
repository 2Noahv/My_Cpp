#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int a;

    cin >> a;

    if (a >= 90)
        cout << "A"
             << "\n";
    else if (a >= 70)
        cout << "B"
             << "\n";
    else if (a >= 40)
        cout << "C"
             << "\n";
    else if (a >= 0)
        cout << "D";

    return 0;
}
