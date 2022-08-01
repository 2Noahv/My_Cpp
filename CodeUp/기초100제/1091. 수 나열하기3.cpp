#include <iostream>

using std::cin;
using std::cout;

int main()
{
    long long int a, m, d, n;

    cin >> a >> m >> d >> n;

    for (int i = 1; i < n; i++)
    {
        a *= m;
        a += d;
    }
    cout << a;
    return 0;
}
