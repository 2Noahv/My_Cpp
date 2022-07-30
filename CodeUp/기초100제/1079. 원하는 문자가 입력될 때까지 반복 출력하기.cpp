#include <iostream>

using std::cin;
using std::cout;

int main()
{
    char c;

    while (true)
    {
        cin >> c;
        if (c != 'q')
            cout << c << "\n";

        else
        {
            cout << "q";
            return 0;
        }
    }
}
