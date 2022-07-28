#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int a, b, c;
    int result = 0;

    cin >> a >> b >> c;

    result = a < b ? (a < c ? a : c) : (b < c ? b : c);

    cout << result;

    return 0;
}
