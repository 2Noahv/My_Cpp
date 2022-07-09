#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n, x, a;

    cin >> n >> x;

    for (int i = 0; i < n; i++)
    {

        cin >> a;
        if (x > a)
            cout << a << " ";
    }
    return 0;
}
