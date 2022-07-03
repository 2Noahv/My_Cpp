#include <iostream>
#include <stdio.h>

// 힙 메모리 영역 (동적할당)
// 동적할당 : 프로그램이 실행 도중에 내가 원하는 만큼의 메모리를 요청 할 수 있는 것.
// 그곳에 내가 원하는 만큼의 크기의 메모리를 잡고 주소를 받아와서 어떤 목적으로 사용할지 정한다.

int main()
{
    // 동적할당
    // 1. 런타임 중에 대응 가능
    // 2. 사용자가 직접 관리해야함(해제)

    int iInput = 0;
    scanf_s("%d", &iInput);

    int *pInt = nullptr; // 지역변수임

    if (100 == iInput)
    {
        pInt = (int *)malloc(100);
    }

    if (nullptr != pInt)
    {
        free(pInt);
        // free 함수로 탈출 (malloc 해제)
        // pInt 인자의 값을 free 함수로 전달하는 것이다. (pInt라는 변수가 해제 되는게 아니다)
        // 메모리 관리를 안하면 메모리 누수, 메모리가 쌓여간다.
    }
    /*
      int* pInt = (int*)mallock(100);
      mallock은 입력 인자로 byte 수를 요청한다.
      mallock()  함수는 내가 지정한 사이즈 만큼 힙영역에 메모리를 생성 시켜준다.
      (100)부분에 Ctrl + Shift + Space를 누르면 void*mallock(size_t_Size) 라고 알려주는데,
      말록은 요청한 만큼 메모리를 할당하고 주소를 줄 뿐이지 거기에 대해 자신의 견해가 없다/
      받아가는 쪽에서 자기가 그곳을 어떤 목적으로 쓸 지 알맞은 포인터 타입으로 가르켜서 조작을 해야한다.
      실시간으로 프로그램이 실행 중에 만들어질 수 있어야 하기 때문에 이렇게 동작한다.
    */
    return 0;
}