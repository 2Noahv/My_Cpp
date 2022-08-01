#include <iostream>

using std::cin;
using std::cout;

int main()
{

    int h, w, n, l, d, x, y;
    int array[101][101] = {};

    cin >> h >> w;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> l >> d >> x >> y;
        if (d == 0)
        {
            for (int j = 0; j < l; j++)
            {
                array[x][y + j] = 1;
            }
        }
        else
        {
            for (int j = 0; j < l; j++)
            {
                array[x + j][y] = 1;
            }
        }
    }

    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
