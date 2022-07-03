//  &&  논리 AND 연산 : 논리식이 모두 참이면 1을 반환한다.
//  ||  논리 OR 연산  : 논리식 중에서 하나라도 참이면 1을 반환한다.
//  !   논리 NOT 연산 : 논리식의 결과가 참이면 0, 거짓이면 1을 반환한다.

#include <stdio.h>

int main()
{
    //  !(논리 NOT), &&(논리 곱), || (논리 합)
    //  참(true), 거짓(false) 
    //  참->0 이 아닌 값,
    //  주로 1 거짓->0 bool truefalse = false;
   
    bool IsTrue = 100;
    // bool 자료형이라 100으로 초기화 되어도 참으로 인식함
    // 참, 거짓의 구분 자료형임 크기는 1byte
    // printf("bool의 크기: %d\n", sizeof(bool));

    IsTrue = true;
    IsTrue = !IsTrue;

    int iTrue = 0;
    iTrue = 0 && 200;
    iTrue = 0 || 200;

    //  비교 연산자 : 양쪽을 비교해주는 연산자 ==, !=, <, <=, >, >=
    //  참, 거짓 구분

        return 0;
}