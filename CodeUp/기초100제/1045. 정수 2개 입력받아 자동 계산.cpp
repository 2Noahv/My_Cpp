#include <iostream>

using std::cin;
using std::cout;
using std::fixed;

int main()
{
    int num1, num2;

    cin >> num1 >> num2;

    cout << num1 + num2 << "\n";
    cout << num1 - num2 << "\n";
    cout << num1 * num2 << "\n";
    cout << num1 / num2 << "\n";
    cout << num1 % num2 << "\n";

    cout << fixed;
    cout.precision(2);
    cout << (double)num1 / num2;

    return 0;
}
