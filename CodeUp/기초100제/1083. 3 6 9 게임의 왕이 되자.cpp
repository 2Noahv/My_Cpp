#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
            cout << "X"
                 << " ";
        else
            cout << i << " ";
    }

    return 0;
}
