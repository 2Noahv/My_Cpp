// Arr.cpp
// 구현 파트
#include "Arr.h"
#include <iostream>

/*
  Arr.h에서 단축키 명령으로 인한 함수가 생성된 모습
  void InitArr(tArr* _pArr)
  {
  }
*/

void InitArr(tArr *_pArr)
{
    _pArr->pInt = (int *)malloc(sizeof(int) * 2);
    // _pArr->pInt는 s.pInt랑 같은 의미
    // int 자료형을 2개 저장할 목적 (8byte)
    // sizeof는 함수가 아닌 연산자로 컴파일 시점에 연산되며,
    // 괄호를 쓰거나 쓰지 않아도 된다.
    // 위 코드의 의도와 명확하게 표현하기 위해 작성 된 것이다.

    _pArr->iCount = 0;
    _pArr->iMaxCount = 2;
}

void Reallocate(tArr *_pArr)
{
    // 1. 2배 더 큰 공간을 동적할당 한다.
    int *pNew = (int *)malloc(_pArr->iMaxCount * 2 * sizeof(int));
    // 말록으로 리턴된 새로운 공간에 주소를 지역변수로 받아야 한다. 
    // Reallocate 함수의 int *pNew의 지역변수는 함수가 종료되면 사라진다.

    // 2. 기존 공간에 있던 데이터들을 새로 할당한 공간으로 복사 시킨다.
    for (int i = 0; i < _pArr->iCount; ++i)
    {
        pNew[i] = _pArr->pInt[i];
    }

    // 3. 기존 공간은 메모리 해제
    free(_pArr->pInt);

    // 4. 배열이 새로 할당된 공간을 가리키게 된다.
    _pArr->pInt = pNew;

    // 5. MaxCount 변경점 적용
    _pArr->iMaxCount *= 2;
}

void PushBack(tArr *_pArr, int _iData) // 추가할 주소, 넣어 줄 데이터
{
    // 힙 영역에 할당한 공간이 다 참
    if (_pArr->iMaxCount <= _pArr->iCount)
    {
        // 재할당
        Reallocate(_pArr);
    }

    // 데이터 추가
    _pArr->pInt[_pArr->iCount++] = _iData;
    //  가변배열이 멤버로 두고 있는 주소 변수로 가서 인덱스 접근
    //  그 때 사용할 인덱스가 본인이 들고 있는 카운터 값 (인덱스)
    //  그리고 접근한 후 수정하고 나면 카운터 값이 그 다음에 증가하는 개념이다.
}

void ReleaseArr(tArr *_pArr)
{
    free(_pArr->pInt);    // 힙 메모리 해제라서 iCount, MCount가 0
    _pArr->iCount = 0;
    _pArr->iMaxCount = 0;
}