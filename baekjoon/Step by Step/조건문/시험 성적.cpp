#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{

    int num;

    cin >> num;

    if (num >= 90)
        cout << "A";

    else if (num >= 80)
        cout << "B";

    else if (num >= 70)
        cout << "C";

    else if (num >= 60)
        cout << "D";

    else
        cout << "F";

    return 0;
}