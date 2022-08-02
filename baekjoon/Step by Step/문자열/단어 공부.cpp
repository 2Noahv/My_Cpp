#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main()
{
    int i, j, k;
    int cnt = 0;
    int alpha[26] = {}; // 알파벳이 26개니까
    string str;

    cin >> str;

    for (i = 0; i < str.length(); i++)
    {
        if (str[i] < 97)
            alpha[str[i] - 65]++; // 대문자 인덱스 마다 +1
        else
            alpha[str[i] - 97]++; // 소문자 인덱스 마다 +1
    }

    int max = 0, maximum = 0;

    for (j = 0; j < 26; j++)
    {
        if (max < alpha[j])
        {
            max = alpha[j];
            maximum = j; // 인덱스를 확인해서 대문자가 몇인지 확인용
        }
    }

    for (k = 0; k < 26; k++)
    {
        if (max == alpha[k])
            cnt++; // 최대 갯수랑 배열값이랑 같을 때 cnt 1 증가 (같은 값이 여러개면 ? 출력을 위함)
    }

    if (cnt > 1)
        cout << "?";
    else
        cout << (char)(maximum + 65);
}
