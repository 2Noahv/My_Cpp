#include <stdio.h>
// 표준 입출력 함수가 구현되어 있는 기능의 헤더를 참조한다.
// Visual Studio의 라이브러리의 기능을 참조 할 수 있다.

int Add(int a, int b)   // 함수
{
    return a + b;
}

int main()
// 프로그램을 실행하면 메인 함수부터 실행함 (진입점)
// main 함수 -> Add 함수 ->  Add 종료 -> 다시 main 함수 후 종료
{
    int iData = Add(100, 200);

    /*
      반복문
      continue : continue를 만나면 이번 반복 횟수를 넘김 다음으로 횟수가 넘어감
      break : 만나는 즉시 종료된다. (탈출기능)
    */
    for (/*반복자 초기화*/; /*반복자 조건 체크*/; /*반복자 변경*/)
    {
    }

    for (int i = 0; i < 4; ++i)
    {
        if (i % 2 == 1) // 2로 나눈 i의 나머지 값만 출력 하겠다.
        {
            continue;
        }
        printf("Test\n");
    }

    /*
    while (조건체크)
    {
    }
    */

    int i = 0;          // for문의 i랑 별개다
    while (i < 2)
    {
        printf("while Test\n");
        ++i;
    }

    return 0;
}