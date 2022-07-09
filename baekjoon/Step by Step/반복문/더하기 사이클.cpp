#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n, init;
    int count = 0;

    cin >> n;

    init = n;

    do
    // do 다음에 오는 코드는 조건식과 상관없이 무조건 한 번은 실행됩니다.
    {
        n = (n % 10) * 10 + ((n / 10) + (n % 10)) % 10;

        count++;

    } while (init != n);
    // 일치하지 않을 때 반복, 일치시 정지

    cout << count;
    return 0;
}