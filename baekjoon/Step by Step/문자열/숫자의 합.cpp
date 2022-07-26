#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n;
    char array[101] = {};
    int sum = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> array[i];
        sum += (int)array[i] - 48;
    }
    cout << sum;

    return 0;
}