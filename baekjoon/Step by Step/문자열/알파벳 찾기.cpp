#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string s;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    cin >> s;

    for (int i = 0; i < alphabet.length(); i++)
    {
        cout << (int)s.find(alphabet[i]) << " ";
    }
    /*
    문자열.find(검색 문자열)

    문자열 인덱스는 0부터 시작.
    문자열 앞에서부터 검색을 시작해 검색 문자열이 시작되는 위치를 반환.

    찾고자 하는 문자열이 없을 때, -1이 반환되는것이 아니라 쓰레기값이 반환된다.
    즉,  string::npos를 반환한다. npos의 값은 - 1로 정의되어있지만, string::npos의
    자료형이 unsigned이므로 2의 보수 개념에 의해 표현할 수 있는 최대 크기의 양수가 출력된다.
    이를 방지하기 위해서는 unsigned가 아닌 일반 int형으로 캐스팅을 진행하여 출력하면 된다.
    */
    return 0;
}