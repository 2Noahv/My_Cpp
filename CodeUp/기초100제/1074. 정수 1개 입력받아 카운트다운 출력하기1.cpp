#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n;
    cin >> n;

    while (n != 0)
    {
        cout << n-- << "\n";
    }
    return 0;
}
