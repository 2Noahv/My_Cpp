#include <stdio.h>
#include <iostream>

#include "Arr.h"

int main()
{

    //  배열 개수를 선언할 때에는 변수를 사용 할 수 없다.자료형은 확정적으로 정해져 있는데 동적할당 처럼 상황에 따라 다르면
    //  고정, 해석, 스택 등등 연쇄적으로 문법이 파괴되서 변수로 쓸 수 없다.
    /*
        int main()
        {
        int a = 100;
        scanf_s("%d", &a);
        int arr[a] = {};
        }
    */
    //  지역변수의 코드가 위와 같이 런타임 중에 배열의 크기가 결정 될 수 없다.
    //  런타임 중에 할당하는게 동적할당이다.함수들은 메모리를 해제하지 않아도 컴파일러가 자동으로 해제 시켜준다.
    //  이유는 스택 크기가 계산되어 있기 때문이다.int형 배열인데 개수가 정해지지 않은 배열을 어떻게 지역에 할당할 것 인가의 문제다.
    //  가변배열 객체(Instance) 객체란 내가 의도한 자료형의 실질적인 데이터(자료형은 도장, 객체는 찍어낸 것) 가변 배열 선언할 때 마다
    //   매번 멤버들을 채울 때와 코드가 반복할 때는 함수로 만들자
    /*
        tArr s;
        s.pInt = (int*)malloc(sizeof(int) * 2);
        s.iCount = 0;
        s.iMaxCount = 2;
        자주 반복 되는 건 함수로 만들자
        void InitArr(tArr* _pArr)
    */

    tArr s1 = {};   // main 함수 종료 시 객체의 메모리 지워진다.
                    // tArr s2 = {};

    InitArr(&s1);   // 함수에 주소를 넘겨준다.
                    // InitArr(&s2);

    for (int i = 0; i < 10; ++i)
    {
        PushBack(&s1, i);
    }

    for (int i = 0; i < s1.iCount; ++i)
    {
        printf("%d\n", s1.pInt[i]);
    }

    ReleaseArr(&s1); // 힙 메모리의 malloc 해제함수
                     // ReleaseArr(&s2);

    return 0;
}
