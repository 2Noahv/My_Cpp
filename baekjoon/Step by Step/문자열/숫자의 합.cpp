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
        // 48이 문자로는 숫자 0을 의미,
        // 이것을 빼서 다시 숫자로 바꿔서 숫자 0부터 시작하게 하기 위함
    }
    cout << sum;

    return 0;
}