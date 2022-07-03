// Arr.h
// 함수 목록, 자료형 타입 명시 역할

#pragma once

// 가변배열 자료형 만들기
// 멤버 구성 설계
// 서포팅할 함수들

typedef struct _tagArr
{
    // 가변 배열을 하기 위한 필수적인 멤버
    int *pInt;
    int iCount;
    int iMaxCount;

} tArr;

// 배열 초기화 함수
// InitArr -> 단축키 Ctrl + '+', '.' 함수 생성 기능이 뜨면 엔터
// Arr.cpp 쪽에 함수가 생성된다.
void InitArr(tArr *_pArr);

// 데이터 추가 함수
void PushBack(tArr *_pArr, int _iDate); // 객체(배열)의 주소, 넣어줄 데이터,

// 공간 추가 확장
// void Reallocate(tArr* _pArr);
// 디테일+) 주석을 준 이유는 재할당 해주려고 cpp에 함수를 만들어 줬는데,
// main 함수에서 호출 할 수 있어 사용자의 의도랑 다를 수 있기 때문이다.
// 배열 메모리 해제 함수
void ReleaseArr(tArr *_pArr);
