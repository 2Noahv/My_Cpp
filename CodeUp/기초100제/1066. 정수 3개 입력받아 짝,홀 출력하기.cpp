#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main()
{
    int a, b, c;
    string strev = "even", strod = "odd";

    cin >> a >> b >> c;

    if (a % 2 == 0)
        cout << strev << "\n";
    else
        cout << strod << "\n";
    if (b % 2 == 0)
        cout << strev << "\n";
    else
        cout << strod << "\n";
    if (c % 2 == 0)
        cout << strev << "\n";
    else
        cout << strod << "\n";

    return 0;
}
