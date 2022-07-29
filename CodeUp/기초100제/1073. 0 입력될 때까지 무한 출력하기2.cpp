#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n;

again:
    cin >> n;
    if (n != 0)
    {
        cout << n << "\n";
        goto again;
    }
    return 0;
}
