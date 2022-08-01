#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n;
    int sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }
        cout << i << " ";
    }

    return 0;
}
