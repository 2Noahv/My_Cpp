#include <stdio.h>
#include <wchar.h>
#include <assert.h>

// 메모리 영역
// 1. 스택
// 2. 데이터
// 3. 힙
// 4. ROM (코드)  실행 중 변경 불가능

// 문자
// char : character
// wchar_t : wide character
// 컴퓨터에서 문자라는 개념은 문자 이미지를 저장 한 표를 메모리에 저장시켜 놓고,
// 특정 숫자가 보이면 그 숫자와 매칭되는 표에 있는 문자를 보여주는 원리다.
// 문자 하나를 1byte로 하면 0 ~ 127 까지만 쓸 수 있다.

unsigned int GetLength(const wchar_t *_pStr)
{
    // _pStr[1];  :  main 함수에서 szName[0]; 을 접근함 const 포인터 때문에 수정 불가능

    int i = 0;   // 문자 개수 체크 용도
    while (true) // 복잡하게 생각하지 말고 true를 넣어서 break로 끊어주자
    {
        wchar_t c = _pStr[i]; // *(_pStr + i);

        if ('\0' == c)
        {
            break;
        }
        ++i;
    }
    return i;
}
/*
   코딩이 능숙해지면 코드를 간결하게 연습하기
     while ('\0' != _pStr[i])
   {
         ++i;
   }
   return i;
*/

void StrCat(wchar_t *_pDest, unsigned int _iBufferSize, const wchar_t *_pSrc)
// 목적지, 목적지에서 안전한 공간, 이어 붙일 문자열
//  wcscat_s(szString, 100, L"def"); 구문을 구현한 함수다.
{
    // 예외처리
    // 이어붙인 최종 문자열 길이가, 목적지 저장 공간을 넘어서려는 경우
    int iDestLen = GetLength(_pDest);
    int iSrcLen = GetLength(_pSrc);

    if (_iBufferSize < iDestLen + iSrcLen + 1) // Null 문자 공간까지 계산
    {
        assert(nullptr); // 메크로 함수, 경고 메세지
    }
    // 문자열 이어 붙이기
    // 1. Dest 문자열의 끝을 확인 (문자열이 이어 붙을 시작 위치)
    //   iDestLen; -> Dest 문자열의 끝 인덱스

    // 2. 반복적으로 Src 문자열을 Dest 끝 위치에 복사하기\
    // 3. Src 문자열의 끝을 만나면 반복 종료
    for (int i = 0; i < iSrcLen + 1; ++i)
    {
        _pDest[iDestLen + i] = _pSrc[i];
    }
}

int main()
{
    char c = 'a';      // 1byte 문자
    wchar_t wc = L'a'; // 2byte 문자
    // wchar_t wc = 49;
    // short s = 49;     // 2byte 정수

    char szChar[10] = "abcdef";
    wchar_t szWchar[10] = L"abcdef";
    // 스택메모리에 10개 만큼의 메모리가 잡힐 것이고,
    // 거기에 내가 작성해 놓은 문자 데이터를 그 공간에 복사하라는 명령이다.
    // short arrShort[10] = { 97, 98, 99, 100, 101, 102, }; 와 같은 메모리 크기다.

    const wchar_t *pChar = L"abcdef";
    // 이 문법을 보면 뭔가 이상한 걸 느껴야 한다.
    // 문자열의 정체가 주소값이다. (어딘가의 주소, 즉 주소변수로 주소를 받은 것)
    // L자가 붙어 있으니, 문자열의 요소 하나하나가 2btye를 차지 한다. 
    // 그래서 wchar_t로 매칭 될 수 있다. 

    //  szWchar[1] = 'z'; // 배열의 b 구간을 z로 수정하는 의미
    //  pChar[1] = 'z';   // 포인터이기 때문에 가리키는 주소의 b를 z로 수정하는 의미다.
    //  또는 *(pChar + 1 = 'z'; 으로 표현 가능한데, const 포인터로 인해 변경 불가능하다.

    //  "459"
    //  문자열로 예를 들면 메모리안에  52/53/57/0 이 들어가 있음 ( 0은 문자로 nul)

    //  Multibyte character set
    //  -> 문자에 따라 가변역할(1byte) char szTest[10] = "abc한글";
    //  표준으로 쓰지 않는다. (윈도우 에서만 사용된다.)
    //  문자마다 메모리가 틀려서 나열 하기도 힘들고 구분하기 힘들다.

    //  Unicode 문자 집합
    //  ->호환성 및 다양한 언어를 표현하는데 있어서 유리하다.(2byte)
        wchar_t szTestw[10] = L"abc한글";

        wchar_t szName[10] = L"Raimond";

    //  int iLen = wcslen(szName);
    //  wcslen : 문자열의 길이를 알려주는 함수
        int iLen = GetLength(szName);
    //  int iLen = wcslen(szName); ->  구현 했을 때 구조

    //  문자열 이어 붙이기
        wchar_t szString[10] = L"abc";

        wcscat_s(szString, 10, L"def");
        StrCat(szString, 10, L"def");

        return 0;
}