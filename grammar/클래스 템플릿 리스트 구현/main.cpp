#include <iostream>

#include "CList.h"

int main()
{
    CList<int> list;
    // CList<int> 가 클래스 풀네임 의미한다.
    // CList 가 클래스 템플릿을 의미한다.

    for (int i = 0; i < 4; ++i)
    {
        list.push_back(i);
    }

    return 0;
}