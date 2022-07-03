// LinkedList.cpp

#include "LinkedList.h"
#include <iostream>

void InitList(tLinkedList *_pList)
{
    _pList->pHeadNode = nullptr;
    // 데이터가 한 개도 안 들어왔는데 노드를 만들 이유가 없다.
    // 데이터가 들어오면 그때 그때 만들기 때문에
    _pList->iCount = 0;
}

void PushBack(tLinkedList *_pList, int _iData)
{
    // tNode node = {};
    // 데이터를 추가할 때 마다 실시간으로 살아 있어야 하는데 지역 변수라서 안된다.

    // 데이터를 저장할 노드 생성
    // 데이터 복사

    tNode *pNode = (tNode*)malloc(sizeof(tNode));
    // 실시간으로 살 수 있는 힙 메모리, 동적할당을 사용한다.
    // 노드 사이즈만큼 할당한 곳을 노드 단위로 데이터를 쓸 것이기 때문에
    // 그 곳을 접근하거나 수정할 때 노드 포인터로 받아와서 쓴다.

    pNode->iData = _iData;
    pNode->pNextNode = nullptr; // 마지막 다음은 없기 때문이다.

    // 추가한 데이터가 처음인지 아닌지 (최초의 데이터)
    if (0 == _pList->iCount)
    {
        _pList->pHeadNode = pNode;
    }

    else // 1개 이상 데이터를 가질 경우
    {
        // 현재 가장 마지막 노드를 찾아서,
        // 해당 노드의 pNext 를 생성시킨 노드의 주소로 채움

        tNode *pCurFinalNode = _pList->pHeadNode; // 현재 기준 마지막 노드 주소
        while (true)
        {
            if (nullptr == pCurFinalNode->pNextNode)
            {
                break;
            }

            // 다음이 있을 경우
            pCurFinalNode = pCurFinalNode->pNextNode;
        }

        pCurFinalNode->pNextNode = pNode;
    }

    ++_pList->iCount;
}
/*
  코드를 간략화
       while (pCurFinalNode->pNextNode)
       {
            // 다음이 있을 경우
            pCurFinalNode = pCurFinalNode->pNextNode;
       }
*/

void PushFront(tLinkedList *_pList, int _iData)
{
    // 새로 생성시킨 노드의 다음을 기존의 헤드로 지정한다.
    tNode *pNewNode = (tNode *)malloc(sizeof(tNode));
    pNewNode->iData = _iData;
    pNewNode->pNextNode = _pList->pHeadNode;

    // 리스트의 헤드노드 포인터를 갱신한다.
    _pList->pHeadNode = pNewNode;

    // 데이터 카운트 증가
    ++_pList->iCount;
}

void ReleaseList(tLinkedList *_pList)
{
    tNode *pDeletNode = _pList->pHeadNode;
    while (pDeletNode)
    {
        tNode *pNext = pDeletNode->pNextNode; // 받아 놓을 임시 변수
        free(pDeletNode);
        pDeletNode = pNext;
    }
}
