#include <iostream>

using std::cin;
using std::cout;

int main()
{
    char a;

    cin >> a;

    switch (a)
    {
    case 'A':
        cout << "best!!!"
             << "\n";
        break;
    case 'B':
        cout << "good!!"
             << "\n";
        break;
    case 'C':
        cout << "run!"
             << "\n";
        break;
    case 'D':
        cout << "slowly~"
             << "\n";
        break;
    default:
        cout << "what?"
             << "\n";
        break;
    }

    return 0;
}
