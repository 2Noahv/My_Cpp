#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int num, mul;
    cin >> num;

    for (int i = 1; i <= 9; i++)
    {
        mul = num * i;
        cout << num << " * " << i << " = " << mul << endl;
    }

    return 0;
}