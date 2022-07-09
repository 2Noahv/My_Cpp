#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int a, b;

    while (cin >> a >> b)
    {
        // 읽은 후 스트림 객체를 반환되지만, 연산자 오버로딩에 의해 bool 값으로
        // true 혹은 false 값을 반환한다.  (스트림이 정상 상태면 true, 아닐 경우 false)
        // explicit operator bool() const;
        // 그래서 cin >> a >> b 과정에서 읽기를 실패했을 경우 스트림 상태를 변경하고,
        // 위 연산자 오버로딩에 의해 반환되는 값이 true에서 false로 바뀌면서 while문을 종료하게 되는 것이다.

        cout << a + b << "\n";
    }

    return 0;
}