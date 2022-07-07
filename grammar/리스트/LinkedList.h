// LinkedList.h

#pragma once

// ﻿연결형 리스트 구조 : 데이터 추가 할 때 마다 한칸 한칸마다 매번 동적할당을 따로 한다.
// 그래서 노드의 첫번째 주소를 알아야 그 다음 노드의 주소로 가고 가고 해서 연결이 가능하다.

// 노드 역할 : 데이터를 저장하는 기본 단위
typedef struct _tagNode
{
    int                 iData;
    struct _tagNode*    pNextNode;
    // 본인이랑 똑같은 타입의 다음 노드 타입을 알아야 한다.
    // C스타일 이라 내부에서는 struct _tagNode* 로 지정 해줘야 한다.
    // 이 후에는 tNode;나 struct _tagNode; 같은 취급을 받는다.

} tNode;

// 연결형 리스트 객체 만들기
typedef struct _tagList
{
    tNode*  pHeadNode;      // 노드의 첫번째 주소
    int     iCount;         // 리스트가 관리하는 총 데이터 개수

} tLinkedList;

// 연결형 리스트 초기화
void InitList(tLinkedList *_pList);

// 연결형 리스트 데이터 추가
void PushBack(tLinkedList *_pList, int _iData);

// 연결형 리스트
void PushFront(tLinkedList *_pList, int _iData);

// 연결형 리스트 메모리 해제
void ReleaseList(tLinkedList *_pList);