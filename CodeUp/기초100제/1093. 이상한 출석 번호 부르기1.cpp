#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n, a;
    int array[100] = {};

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        array[a] = array[a] + 1;
    }
    for (int j = 1; j <= 23; j++)
    {
        cout << array[j] << " ";
    }
}
