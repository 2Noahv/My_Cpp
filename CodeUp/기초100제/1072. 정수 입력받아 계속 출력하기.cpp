#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n, m;
    cin >> m;

again:
    if (m-- != 0)
    {
        cin >> n;
        cout << n << "\n";
        goto again;
    }
    return 0;
}
