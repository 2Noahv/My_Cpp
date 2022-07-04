#include <iostream>
// cout은 ostream 의 클래스로 만든 객체이고 extrun 키워드로 iostream 을 참조하면
// 해당 파일은 프로그램 실행할 때 cout 이라는 전역 변수 알게 되는 것 이다.
// cin은 istream을 참조한다.
// wcout은 wostream, wcint은 wisteram 를 참조한다.

namespace MYSPACE
// namespace  = 이름 공간 , MYSPACE  = 내 마음대로 적은 것
{
    int g_int; // 전역변수
}

// using namespace std;
// std라는 namespace를 사용하겠다고 선언
// std가 없는걸로 취급하기 때문에 목적을 상실한다.
// 귀찮더라도 자주 쓸 것 같은 것들만 해제하는걸 권장한다.
using std::cin;
using std::cout;
using std::endl;
using std::wcout;

// endl는 함수를 구현한 것
void MyEndl()
{
    wprintf(L"\n");
}

class CMyOStream
{

public:
    CMyOStream &operator<<(int _idata)
    {
        wprintf(L"%s", _idata);
        return *this;
    }

    CMyOStream &operator<<(const wchar_t *_pString)
    {
        wprintf(L"%s", _pString);
        return *this;
    }

    // MyEndl 함수를 operator가 받아가는 것이다.
    // 타입이 일치하기 때문에 비트 쉬프트 연산자를 operator가
    // 연산자 오버 로딩 되어 있기 때문에 main 함수의 mycount << MyEndl;로 표출가능
    CMyOStream &operator<<(void (*_pFunc)(void))
    {
        _pFunc(); // 함수 호출
        return *this;
    }

    CMyOStream &operator<<(int _idata)
    {
        scanf_s("%d", _idata);
        return *this;
    }
};

CMyOStream mycout;
// 멤버가 없을 경우 실체가 있어야 하므로 1byte를 준다.
// 클래스에 특정 연산자가 가해 질 때 호출되는 함수가 연산자 오버로딩

int main()
{
    //{
    // C printf
    // << 은 연산자 오버로딩
    // cout << "안녕" << 10 << endl;
    // wcout << L"안녕" << 10 << endl;
    // endl는 함수다.

    // C scanf
    // int iInput = 0;
    // cin >> iInput;
    //}

    // namespace 접근 방법
    // MYSPACE::g_int = 0;

    // mycout << 10;
    // CMyOStream& operator << (int _idata) 호출함
    // *this 는 CMyOStream의 포인터 부분이다.
    // 그래서  mycout << 10 << 20 << 30;  이런식으로 이어서 갈 수 있다.

    setlocale(LC_ALL, "korean");
    _wsetlocale(LC_ALL, L"korean");
    // 언어 설정이 visual studio는 표준을 쓸 수 있기 때문에 한글 설정을 해줘야 한다.
    // 프로그램 실행전에 아스키코드 대응 표를 한글 쪽으로 맞춰 준 것이다.

    mycout << L"안녕";

    // int a = 0;
    // mycout >> a;

    mycout << 10 << L" " << 20 << L" " << L"문자열" << MyEndl;
    // MyEndl 함수를 << 함수로 전달함
    return 0;
}
