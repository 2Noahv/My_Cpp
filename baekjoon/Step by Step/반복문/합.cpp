#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int num, sum = 0;

    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }

    cout << sum;

    return 0;
}