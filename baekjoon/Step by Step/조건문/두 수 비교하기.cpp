#include <iostream>

using std::cin;
using std::cout;

int main()
{

    int A, B;

    cin >> A >> B;

    if (A > B)
        cout << ">";

    else if (A < B)
        cout << "<";

    else
        cout << "==";

    return 0;
}