#include <iostream>

using std::cin;
using std::cout;

long long add(long long a, long long b)
{
    return a + b;
}

int main()
{
    long long num1, num2;
    cin >> num1 >> num2;
    long long i = add(num1, num2);

    cout << i;

    return 0;
}