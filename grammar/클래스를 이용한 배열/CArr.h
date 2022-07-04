// CArr.h
#pragma once

class CArr
{
private: // 안 적어도 인식하지만 명시적으로 적어주자
         // 가변배열 멤버
         // 하나의 배열에 다양한 크기의 배열을 저장 할 수 있음으로 배열의 배열

    int *m_pInt;
    // 데이터를 저장을 할 때 프로그램 실행 중에 계속 확장해야 하기 때문에 주소를 필요하다.

    int m_iCount;
    // 현재 들어와 있는 개수

    int m_iMaxCount;
    // 최대 개수

public:
    void push_back(int _Data);

    void resize(int _iresizeCount);
    // 할당된 사용할 수 있는 영역을 넓혀주는 함수

    int &operator[](int idx);
    // 반환되는 곳을 참조 (동일시)

public:
    // 생성자와 소멸자는 만들지 않아도 기본으로 만들어진다.
    // 여기에서는 생성자와 소멸자에서 해야 할 일이 있기 때문에 만들었다.
    CArr();
    ~CArr();
};
