#include <stdio.h>
/*
   사용자 정의 자료형
   자료형 : 데이터 타입(단위)
   typedef 타입을 재정의 해준다.
   구조체 키워드 struct

   C언어는 struct를 정의 해줘야 한다.
   계속 struct 키워드를 붙이기 힘들기 때문에 typedef 키워드로 새로 정의해준다.
   C++에서는 개선이 되었기 때문에 붙여줄 필요가 없다.
*/

typedef struct _tagMyST
{
    int a;
    float f;
} MYST;

typedef struct _tagBig
{
    MYST k; // 구조체 안에 구조체를 포함한 경우
    int i;
    char c;
} BIG;

int main()
{
    // 구조체
    MYST t = {100, 3.14f}; // 구조체의 초기화
    t.a = 10;
    t.f = 10.2312f;

    int iSize = sizeof(MYST); // 사이즈 확인 가능
    int iSize = sizeof(BIG);  // 사이즈 확인 가능

    return 0;
}