#include <iostream>

using std::cin;
using std::cout;
using std::fixed;

int main()
{
    double num;

    cin >> num;
    cout << fixed;
    cout.precision(11);
    cout << num;

    return 0;
}