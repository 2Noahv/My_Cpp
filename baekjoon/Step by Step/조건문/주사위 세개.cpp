#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::max;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    if (A == B && B == C)
    {
        cout << 10000 + (A * 1000);
    }

    else if (A == B || A == C)
    {
        cout << 1000 + (A * 100);
    }
    else if (B == C)
    {
        cout << 1000 + B * 100;
    }
    else
    {
        cout << max({A, B, C}) * 100;
    }

    return 0;
}