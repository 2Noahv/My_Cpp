#include <iostream>

using std::cin;
using std::cout;
using std::ios_base;

int main()
{
    ios_base::sync_with_stdio(0);

    int n[9] = {};
    int max = 0;
    int count = 0;

    for (int i = 0; i < 9; i++)
    {
        cin >> n[i];

        if (n[i] > max)
        {
            max = n[i];
            count = i;
        }
    }
    cout << max << "\n"
         << count + 1;

    return 0;
}