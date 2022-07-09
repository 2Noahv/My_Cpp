#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int st;

    cin >> st;

    for (int i = 1; i <= st; i++)
    {
        for (int j = st; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    /* 이런 방법도 있다.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j < n - i - 1) cout << " ";
            else cout "*";
    */

    return 0;
}
