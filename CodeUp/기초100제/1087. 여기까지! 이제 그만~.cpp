#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int a, sum = 0;
    cin >> a;
    for (int i = 1; sum < a; i++)
    {
        sum += i;
    }
    cout << sum;

    return 0;
}
