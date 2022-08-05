#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main(void)
{
    string x, y;
    cin >> x >> y;

    string bigger;
    /*
        ▶ str1.operator[index]
        함수 원형 : char & operator[](size_t index);
        함수 설명 : C++ string은 일반 배열처럼 대괄호를 이용해서 string 인자에 접근할 수 있습니다. at과 다른점은 string의 index(인덱스) 범위를 검사하지 않기 때문에 at 함수보다는 빠릅니다.
        하지만 예외를 뱉어내지 않습니다.
        index는 0부터 시작합니다.index 번째 인자를 반환합니다.
        함수 예시 : str1[1];
    */
    for (int i = 2; i >= 0; i--)
    {
        if (x[i] > y[i])
        {
            bigger = x;
            break;
        }

        else if (x[i] < y[i])
        {
            bigger = y;
            break;
        }
    }

    cout << bigger[2] << bigger[1] << bigger[0];
    return 0;
}