#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n;
    int cnt = 1, i = 1;

    cin >> n;

    while (n > i)
    {
        i += (6 * cnt);
        cnt++;
    }
    cout << cnt;

    return 0;
}