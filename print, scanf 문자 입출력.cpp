#include <stdio.h>  // C언어 표준 입출력 헤더 함수 printf / scanf 를 사용하기 위함
#include <iostream> // C++ 표준 입출력 헤더 함수 std 네임 스페이스를 사용하기 위함
// #include는 전처리기(먼저 처리해줌)의 역할이며,
// 헤더 파일을 컴파일 전에 쓰겠다는 의미한다.

using namespace std;
// namespace(소속)에 있는 std 클래스에 정의 된 함수를 사용하겠다.
// cin, cout 콘솔 입출력 명령을 std 없이 간편하게 쓰기 위함

// using namespace std를 쓰지 않을 경우
// std::cin >> a;
// std::cout << a << std::endl;

int main()
{

    int a;

    //  콘솔창에 출력
        printf("abcdef %d \n", 10);
    printf("abcdef %f \n", 3.14f);
    //  \n은 개행, 줄바꿈

    cin >> a;
    // 사용자에게 값을 입력 받아 a에 저장

    //  콘솔창에 입력
        scanf_s("%d", &a);

    cout << a << endl;
    // 사용자 입력 받은 a 값을 출력
    // endl은 줄바꿈

    return 0;
}