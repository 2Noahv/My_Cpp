#include <iostream>

using std::cin;
using std::cout;
using std::ios_base;

int main()
{
    ios_base::sync_with_stdio(0);

    int num;
    int rm[42] = {0};
    int count = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> num;
        rm[num % 42]++;
    }

    for (int i = 0; i < 42; i++)
    {
        if (rm[i] != 0)
            count++;
    }
    cout << count << "\n";
}
