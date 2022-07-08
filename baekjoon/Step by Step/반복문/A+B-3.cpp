#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int A, B, num;

    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        cin >> A >> B;
        cout << A + B << endl;
    }

    return 0;
}