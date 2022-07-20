#include <iostream>

using std::cin;
using std::cout;
using std::fixed;

int main()
{

    float a;

    cin >> a;

    cout << fixed;     // 소수점 아래로 고정
    cout.precision(6); // 정수포함, 전체 자리 6자리 표현
    cout << a;

    return 0;
}