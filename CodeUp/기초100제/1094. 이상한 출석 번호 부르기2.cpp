#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n, a;
    int array[10000] = {};

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> array[i];
    }

    for (int j = n; j >= 1; j--)
    {
        cout << array[j] << " ";
    }

    return 0;
}
