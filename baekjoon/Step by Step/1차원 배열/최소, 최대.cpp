#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::ios_base;
using std::sort;

int main()
{

    ios_base::sync_with_stdio(0);
    // false 또는 (0) : C 표준 stream과 C++ 표준 stream의 동기화를 끊는다.
    // cin, cout이 속도가 printf, scanf 보다 느림
    int n;

    cin >> n;

    int array[1000001];
    // 백준 문제의 알고리즘에는 맞지만, 컴파일 시 오버플로우가 발생한다.
    // 배열에 변수를 사용할 수도 있지만, 후에 동적할당을 할 때 변수를
    // 쓸 수 없기 때문에 일부러 이렇게 만들었다.

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    sort(array, array + n);

    cout << array[0] << " " << array[n - 1];

    return 0;
}