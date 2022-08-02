#include <iostream>

using std::cin;
using std::cout;

int main()
{

    int i, j, x = 2, y = 2;
    int array[11][11] = {};

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            cin >> array[i][j];
        }
    }

    while (array[x][y] != 2)
    {
        array[x][y] = 9;
        if (array[x][y + 1] != 1)
            y++;
        else if (array[x + 1][y] != 1)
            x++;
        else
            break;
    }

    array[x][y] = 9;

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
