#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int sum = 0;
    int a, b, c;

    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        cin >> b >> c;
        sum = b + c;
        cout << "Case #" << i << ": " << sum << "\n";
    }

    return 0;
}