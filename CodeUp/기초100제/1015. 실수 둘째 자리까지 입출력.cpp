#include <iostream>

using std::cin;
using std::cout;
using std::fixed;

int main()
{

    float a;

    cin >> a;

    cout << fixed;
    cout.precision(2);
    cout << a;

    return 0;
}