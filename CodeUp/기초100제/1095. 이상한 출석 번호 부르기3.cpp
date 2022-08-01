#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n, fast = 0;
    int array[10000] = {};
    int min = 23;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> array[i];
        fast = array[i];
        if (min > fast)
        {
            min = array[i];
        }
    }
    cout << min;

    return 0;
}
