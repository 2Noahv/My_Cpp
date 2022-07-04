// CArr.h

#pragma once

// 클래스 템플릿은 헤더 파일에 있어야 한다.
// 링크할 때 헤더를 참조하는데 구현된 게 없기 때문에 cpp 파일은 필요가 없다.
// ctrl + r + r  : 이름 바꾸기

template <typename T>
class CArr
{
private:
    T *m_pData; // 저장하는 데이터 타입이 T니까 가르키는 포인터도 T
    int m_iCount;
    int m_iMaxCount;

public:
    void push_back(const T &_Data); // 원본은 수정하지 않되, 참조만 하기 위해
    void resize(int _iresizeCount);

    T &operator[](int idx);

public:
    CArr();
    ~CArr();
};

template <typename T>
CArr<T>::CArr()
    // CArr 클래스에 T버전 안에 구현되어 있는 생성자를 지칭
    // CArr에서 <T>를 빼면 클래스만 템플릿 <T>까지 해야 생성자가 구현된다.
    : m_pInt(nullptr), m_iCount(0), m_iMaxCount(2)
{
    m_pInt = new T[2];
}

template <typename T>
CArr<T>::~CArr()
{
    delete[] m_pInt;
}

template <typename T>
void CArr<T>::push_back(const T &_Data)
{
    if (m_iMaxCount <= iCount)
    {
        // 재할당
        resize(m_iMaxCount * 2);
    }
}

template <typename T>
void CArr<T>::resize(int _iresizeCount)
{
    if (m_iMaxCount >= iresizeCount)
    {
        assert(nullptr);
    }

    T *pNew = new T[_iresizeCount];

    for (int i = 0; i < m_iCount; ++i)
    {
        pNew[i] = m_pInt[i];
    }

    delete[] m_pInt;

    m_pInt = pNew;

    m_iMaxCount = _iResizeCount;
}

template <typename T>
T &CArr<T>::operator[](int idx)
{
    return m_pInt[idx];
}