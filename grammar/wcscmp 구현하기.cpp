#include <stdio.h>
#include <wchar.h>

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

int Strcmp(const wchar_t *_left, const wchar_t *_right)
{
    int leftLen = GetLength(_left);
    int rightLen = GetLength(_right);

    int iLoop = leftLen;
    int iReturn = 0;

    if (_left < _right)
    {
        iLoop = leftLen;
        iReturn = -1;
    }
    else if (leftLen > rightLen)
    {
        iLoop = rightLen;
        iReturn = 1;
    }

    for (int i = 0; i < iLoop; ++i)
    {
        if (_left[i] < _right[i])
        {
            return -1;
        }
        else if (_left[i] > _right[i])
        {
            return 1;
        }

        return iReturn;
    }
}

int main()
{
    // int iRet = wcscmp(L"aac", L"abc");
    int iRet = Strcmp(L"ccc", L"ccc");

    return 0;
}
