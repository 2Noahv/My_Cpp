#include <stdio.h>
#include <stdlib.h>

void Output(const int *pI)
{
   int i = *pI;
   // *pI = 100; 바꿀 수 없음
}

int main()
{
   // 1. const
   const int cint = 100;

   int a = 0;
   int *pInt = &a;

   *pInt = 1;
   pInt = nullptr;

   int ii = 10;
   // l-value : 변수 -> ii
   // r-value : 상수 -> 10

   // cint = 100;
   // 상수로 취급해 주지만 앞으로 수정할 값을 문법이 검사해서 막아주는 개념이다.
   // 완벽한 상수는 아니다. (이유는 아래와 같다)
   /*
      volatile const int cint = 100;
      pInt = (int*)&cint;
      *pInt = 300;
      printf("cint 출력 : &d\n", cint);

      위의 경우 일 때, volatile 변수를 참조할 경우
      레지스터에 로드된 값을 사용하지 않고 매번 메모리를 참조한다.
      그래서 상수화된 cint에도 300의 값이 들어갈 수 있다.

    ============
    const 포인터
    ============
    int b = 0;
    const int* pConstInt = &a;  // 주소의 원본이 상수화
    pConstInt = &b;             // 주소 변경 가능
    *pConstInt = 400;           // 주소의 값 변경 불가능

    ============
    포인터 const
    ============
    int* const pIntConst = &a;  // 포인터 변수가 상수화
    pIntConst = &b;             // 주소 변경 불가능
    *pIntConst = 400;           // 주소의 값 변경 가능

     초기화 시 가리킨 대상을 가리킴, 가리키는 원본을 수정 할 수 없음
    const int* const pConstIntConst = nullptr;
    pConstIntConst = &b;        // 포인터 변수가 상수이므로 변경 불가능
    *pConstIntConst = 300;      // 가리키는 값이 상수이므로 변경 불가능

    이런 경우도 있다. const 포인터랑 같다.
    int const* p = &a;
  */

   // 입력 받아야 할 데이터가 크거나 2개 이상의 중복되지 않는 경우
   a = 100;
   Output(&a);
   // 괄호에다가 Ctrl + Shift + Space  함수의 선언 원형이 나온다.
   // void Output(const int * pI)

   /*
      정말 const부터는 헷갈리기 시작한다.
      포인터를 이해했더니 const를 붙이니까 더욱 더 헷갈린다..
      인강과 인터넷의 도움으로 이렇게 정의하고 메모 했다.
      복습을 꾸준히 해야겠다.
   */
}