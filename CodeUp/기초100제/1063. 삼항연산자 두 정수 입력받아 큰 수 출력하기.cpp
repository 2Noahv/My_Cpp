#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int a, b;
    int result = 0;

    cin >> a >> b;

    result = a > b ? a : b;

    cout << result;

    return 0;
}
