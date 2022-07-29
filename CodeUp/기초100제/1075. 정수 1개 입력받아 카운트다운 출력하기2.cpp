#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n;
    cin >> n;

    while (n != 0)
    {
        n = n - 1;
        cout << n << "\n";
    }
    return 0;
}
