#include <iostream>

#include "Carr.h"

int main()
{
    // CArr<int> carr;
    CArr<float> carr;
    // 가변배열 클래스 객체의 데이터가 float 단위로 관리하고 저장하고 가져 올 수 있다.

    carr.push_back(3.14f);
    carr.push_back(6.28f);
    carr.push_back(30.444f);

    float fData = carr[1];

    return 0;
}
