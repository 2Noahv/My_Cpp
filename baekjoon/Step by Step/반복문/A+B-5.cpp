#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int a, b;

    while (true)
    {
        cin >> a >> b;

        if (a == 0 && b == 0)
            break;

        cout << a + b << "\n";
    }
    return 0;
}