#include <iostream>

using std::cin;
using std::cout;

int main()
{
    char c;
    cin >> c;

    for (char i = 'a'; i <= c; i++)
        cout << i << " ";

    return 0;
}
