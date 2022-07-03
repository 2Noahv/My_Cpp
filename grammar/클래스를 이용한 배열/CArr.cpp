// CArr.cpp

#include "CArr.h"

#include <assert.h>

CArr::CArr() // Class 밖이라서 :: 지칭을 해줘야 한다.
    : m_pInt(nullptr), m_iCount(0), m_iMaxCount(2)
{
    m_pInt = new int[2];
    // C 스타일 이였으면 malloc(8)을 쓰지만
    // C++로 넘어오면서 동적할당이 new라는 키워드가 생긴다.
}

CArr::~CArr()
{
    delete[] m_pInt;
    // C에서 free를 쓰지만 C++에선 delete pInt가 가리키는 곳에
    // int가 여러개의 단위가 있어서 [] 사용해서 연속된 부분을 다 지운다.
}

void CArr::push_back(int _Data) // push_back 함수를 호출한 객체 CArr 가변 배열의 객체가
{                               // this,  int _Data를 this로 넣어줌 (this는 생략 가능함)
    if (/*this->*/ m_iMaxCount <= /*this->*/ m_iCount)
    {
        // 재할당
        resize(m_iMaxCount * 2);
    }

    // 데이터 추가
    /*this->*/ m_pInt[this->m_iCount++] = _Data;
    //  가변배열이 멤버로 두고 있는 주소 변수로 가서 인덱스 접근
    //  그 때 사용할 인덱스가 본인이 들고 있는 카운터 값 (인덱스)
    //  그리고 접근한 후 수정하고 나면 카운터 값이 그 다음에 증가하는 개념이다.
}

void CArr::resize(int _iresizeCount)
{
    // 현재 최대 수용량 보다 더 적은 수치로 확장하려는 경우
    if (m_iMaxCount >= _iresizeCount)
    {
        assert(nullptr);
    }

    // 1. 리사이즈 시킬 개수만큼 동적할당 한다.
    int *pNew = new int[_iresizeCount];

    // 2. 기존 공간에 있떤 데이터들을 새로 할당한 공간을 복사시킨다.
    for (int i = 0; i < m_iCount; ++i)
    {
        pNew[i] = m_pInt[i];
    }

    // 3. 기존 공간은 메모리 해제
    delete[] m_pInt;

    // 4. 배열이 새로 할당된 공간을 가리키게 한다.
    m_pInt = pNew;

    // 5. MaxCount 변경점 적용
    m_iMaxCount = _iresizeCount;
}

int& CArr::operator[](int idx)
{
    return m_pInt[idx];
    // 함수의 반환 타입은 호출된 함수와  종료된 함수가 반환한 값은 임시적으로 저장되어 있는 곳에서 꺼내 온다.
    // 그래서 래퍼런스 &를 사용해서 주소 접근해서 수정 ()
}