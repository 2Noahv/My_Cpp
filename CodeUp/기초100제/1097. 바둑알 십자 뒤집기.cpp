#include <iostream>

using std::cin;
using std::cout;

int main()
{

    int n, x, y;
    int array[20][20] = {};

    for (int i = 1; i <= 19; i++)
    {
        for (int j = 1; j <= 19; j++)
        {
            cin >> array[i][j];
        }
    }

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> x >> y;
        for (int j = 1; j <= 19; j++)
        {
            if (array[x][j] == 0)
                array[x][j] = 1;
            else
                array[x][j] = 0;
        }
        for (int k = 1; k <= 19; k++)
        {
            if (array[k][y] == 0)
                array[k][y] = 1;
            else
                array[k][y] = 0;
        }
    }
    for (int i = 1; i <= 19; i++)
    {
        for (int j = 1; j <= 19; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
