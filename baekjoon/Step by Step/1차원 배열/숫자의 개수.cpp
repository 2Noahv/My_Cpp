#include <iostream>

using std::cin;
using std::cout;
using std::ios_base;

int main()
{
    ios_base::sync_with_stdio(0);

    int count[10] = {};
    int a, b, c;

    cin >> a >> b >> c;

    int res = a * b * c;

    while (res != 0)
    {
        count[res % 10]++;
        // count[res %10] 나머지의 값에 따라 인덱스 역할
        // 뒤의 ++ 은 그 자리에 1을 더하기 위한 것 이다.

        res /= 10;
    }

    for (int i : count)
    {
        cout << i << "\n";
    }
    return 0;
}