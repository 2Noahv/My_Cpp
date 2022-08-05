#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int A, B, C;
    int n = 1;
    cin >> A >> B >> C;

    if (B >= C)
    {
        cout << -1;
        return 0;
    }

    cout << A / (C - B) + 1;
    return 0;
}