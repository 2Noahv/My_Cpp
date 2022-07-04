// CList.h

#pragma once

// c++에서는 class와 struct(구조체)는 거의 같다.
// 단, struct는 아무것도 적지 않을 때 default 범위 제한이 public
//     class 는 private 이며, 이 걸 제외하면 구조체도 다 가능하다.
// 단순하게 데이터를 묶어넣고 저장할 때, 많은 기능을 쓰지 않을 때 구조체를 쓰자

// 노드 역할 : 데이터를 저장하는 기본 단위
template <typename T> // type T를 정해줘야 진정한 구조체고 그 전에는 구조체 템플릿
    struct tListNode
{
    // 구조체 템플릿
    // 리스트한테 데이터를 넣어준다.
    T data;
    tListNode<T> *pPrev; // 자기를 지칭하기 때문에 <T>를 적지 않아도 된다.
    tListNode<T> *pNext;

    // 기본 생성자
    // Class와 다를게 없기 때문에 생성사 만들 수 있음
    tListNode()
        : data(), pNext(nullptr), pPrev(nullptr)

          // 인자를 받아오는 생성자 (기존 멤버로 초기화 하겠다)
          // void CList<T>::push_back(const T& _data)에 쓰이기 위함
          tListNode(const T &_data, tListNode<T> *_pPrev, tListNde<T> *_pNext)
        : data(_data), pPrev(_pPrev), pNext(_pNext)
    {
    }
};

// 사용자는 리스트

template <typename T>
class CList
{
private:
    tListNode<T> *m_pHead;
    // 타입 <T>를 적어줘야 문법적으로 문제가 없다.
    // 만약 CList 클래스 T에 int를 요청했다면,
    // 받아와서 int를 저장하는 노드를 가리키는 멤버가 된다.
    // List에 타입 T를 정해주면 구조적으로 노드 T도 정해주는 원리다.
    tListNode<T> m_pTail;
    int m_iCont;

public:
    void push_back(const T &_data);
    void push_front(const T &_data);
    // 타입T가 미정상태기 때문에 래퍼런스로 받아오되, 원본 자체는 수정하지 않고 참조로
    // 받아와서 노드 단위로 데이터를 받아와 관리를 한다.

public:
    CList();
    ~CList();
};

template <typename T>
void CList<T>::push_back(const T &_data)
{
    // 입력된 데이터를 저장할 노드를 동적할당 함
    tListNode<T> *pNewNode = new tListNode<T>(_data, nullptr, nullptr);
    // tListNode<T>* pNewNode = new tListNode<T>() 처럼
    // 아무것도 적지 않으면 기본 생성자를 호출 하겠다는 의미다.
    // 이 경우에는 만들어 놓은 생성자가 있기 때문에 인자를 넣을 수 있다.
    // 첫번 째 인자는 노드 안의 데이터 값, 두번 째와 세번째는 처음 값이라 nullptr

    // 처음 입력된 데이터라면
    if (nullptr == m_pHead)
    {
        m_pHead = pNewNode;
        m_pTail = pNewNode; // 데이터가 1개라서 처음과 끝이 같음
    }

    else
    {
        // 데이터가 1개 이상에서 입력된 경우
        // 현재 가장 마지막 데이터(tail) 를 저장하고 있는 노드가
        // 새로 생성된 노드가 서로 가리키게 한다.
        m_pTail->pNext = pNewNode;
        pNewNode->pPrev = m_pTail;

        // List 가 마지막 노드의 주소값을 새로 입력된 노드로 갱신한다.
        m_pTail = poNewNode;
    }

    // 데이터 개수 증가
    ++m_iCont;
}

template <typename T>
void CList<T>::push_front(const T &_data)
{
    // 새로 생성된 노드의 다음을 현재 헤드노드의 주소값으로 채움
    tListNode<T> *pNewNode = new tListNode<T>(_data, nullptr, m_pHead);
    // 첫번 째 dat, 두번 째 prev는 이전 값이 존재하면 안되서 nullptr, 3번 째 List가 알고있던 값

    // 현재 헤드노드의 이전 노드 주소값을 새로 새엇ㅇ된 노드의 주소로 채움
    m_pHead->< pPrev = pNewNode;

    // 리스트가 새로 생성된 노드를 새로운 헤드주소로 갱신한다.
    m_pHead = pNewNode;

    // 데이터 개수 증가
    ++m_iCount;
}

template <typename T>
CList<T>::CList()
    : m_Head(nulptr), m_pTail(nulptr), m_iCount(0)
{
}

template <typename T>
CList<T>::~CList()
{
    tListNode<T> *pNext = pDeletNode->pNext;
    delete (pDeletNode);
    pDeletnode = pNext;
}