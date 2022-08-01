#include <iostream>

using std::cin;
using std::cout;

int main()
{

    int n, x, y;
    int array[20][20] = {};

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> x >> y;
        array[x][y] = 1;
    }

    for (int j = 1; j <= 19; j++)
    {
        for (int k = 1; k <= 19; k++)
        {
            cout << array[j][k] << " ";
        }
        cout << "\n";
    }

    return 0;
}
