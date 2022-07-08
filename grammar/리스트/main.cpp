#include <iostream>

#include "LinkedList.h"

int main()
{

    // 연결형 리스트 특징
    // 힙메모리 사용, 추가 할 때 마다 하나씩 만든다.
    // 데이터 하나를 저장하는 단위를 노드(마디)라고 한다.
    // 하나의 노드안에 데이터도 들어 있지만, 다음 주소 파트도 들어있다.

    tLinkedList list = {};
    InitList(&list);

    PushBack(&list, 100);
    PushBack(&list, 200);
    PushBack(&list, 300);

    PushFront(&list, 100);
    PushFront(&list, 200);
    PushFront(&list, 300);

    // Front Test
    tNode *pNode = list.pHeadNode;
    for (int i = 0; i < list.iCount; ++i)
    {
        printf("%d\n", pNode->iData);
        pNode = pNode->pNextNode;
    }

    ReleaseList(&list);

    return 0;
}