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
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    cout << sum << "\n";
    return 0;
}
