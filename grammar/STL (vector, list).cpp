#include <iostream>

// #include "CList.h"

#include <vector>
// 가변배열의 표준 라이브러리        (템플릿)
#include <list>
// 표준으로 연결해주는 연결형 리스트 (템플릿)

using std::list;
using std::vector;

int main()
{
    /*
        CList<int> List;
        // CList<int> 가 클래스 풀네임 의미한다.
        // CList 가 클래스 템플릿을 의미한다.

        for (int i = 0; i < 4; ++i)
        {
            List.push_back(i);
        }
    */

    vector<int> vecInt;
    // vector 클래스 템플릿
    // vector<int> 클래스 이름
    vecInt.push_back(10);
    vecInt.push_back(20);
    // vector 는 push_front 기능이 X, 비효율적 list 형식으로 가는게 맞다.

    vecInt[1];
    vecInt.at(1);
    // 같은 말임

    // class CArr 기준
    vecInt.data();
    // 최초 시작주소 반환
    // public:
    // T* data() { return m_pData; }

    vecInt.size();
    // public:
    // int size() { return m_iCount; }
    vecInt.capacity();
    // public:
    // int capacity() {return m_iMaxCount; }

    // 순회기능
    // size_t 는 8byte, long long( __int64) vecInt.size(); 타입이랑 맞춘거임
    // for (size_t i = 0; i < vecInt.size(); ++i)
    // {
    //   cout << vecInt[i] << endl;
    // }

    // class CList 기준
    list<int> listInt;
    listInt.push_back(10);
    listInt.push_back(100);

    listInt.size();
    // public:
    // int size() { return m_iCount; }

    // iterator(inner class, 포함 클래스)
    // list<int>::iterator iter = listInt.begin();
    // int iData = *iter; 는 listInt.push_back(10); 의 값을 가리키며,
    // iter 는 iterator의 객체이고, * 는 연산자 오버로딩이다. (오퍼레이터로 포인터 느낌을 줌)
    // *의 역참조 연산을 만나면 자기가 가리키고 있던 노드로 가서 데이터 파트만 접근하게 한다.

    return 0;
}