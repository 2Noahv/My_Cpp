#include <iostream>

using std::cin;
using std::cout;
using std::fixed;

int main()
{
    int num1, num2, num3;
    int Sum = 0;
    double Average = 0;

    cin >> num1 >> num2 >> num3;

    Sum = num1 + num2 + num3;
    Average = Sum / 3.0;

    cout << fixed;
    cout.precision(1);

    cout << Sum << "\n";
    cout << Average;

    return 0;
}
