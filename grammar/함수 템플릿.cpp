#include <iostream>

// Add라는 함수 템플릿 (함수 찍어내는 틀)
template <typename T> // T -> 치환 자료형
T Add(T a, T b)       // 반환 타입이 T인데 메인함수에서 전달 받으려고 하는
{                     // 타입이 int 이기 때문에 T는 int로 컴파일러가 인식한다.
    return a + b;
}

int main()
{

    // 함수 템플릿
    int i = Add /*<int>*/ (10, 20);
    // T 부분의 int가 들어간 Add 함수 템플릿 (함수가 아님)
    // 해당 typename 자리에 어떤게 들어 갈지를 요청 했을 때 함수가 그제서야  만들어진다.

    return 0;
}