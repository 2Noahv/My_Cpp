#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cout << i << " " << j << "\n";

    return 0;
}
