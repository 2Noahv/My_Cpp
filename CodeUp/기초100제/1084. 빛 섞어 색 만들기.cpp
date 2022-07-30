#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int cnt = 0;
    int r, g, b;

    cin >> r >> g >> b;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < g; j++)
            for (int k = 0; k < b; k++)
            {
                cout << i << " " << j << " " << k << "\n";
                cnt++;
            }
    cout << cnt;
    return 0;
}
