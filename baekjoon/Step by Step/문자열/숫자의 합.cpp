#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n;
    char array[101] = {};
    int sum = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> array[i];
        sum += (int)array[i] - 48;
        // 48이 문자열로 숫자 0이라 배열 array이 char 값이기 때문에
        // 빼주면 0이 된다.
    }
    cout << sum;

    return 0;
}