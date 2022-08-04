#include <iostream>
#include <string>

using std::basic_istream;
using std::cin;
using std::cout;
using std::string;

int main()
{
    int i, j, k;
    int cnt = 0;
    string str;

    getline(cin, str);

    if (str.empty())
    {
        cout << "0";
        return 0;
    }

    cnt = 1;
    for (i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
            cnt++;
    }

    if (str[0] == ' ')
        cnt--;
    if (str[str.length() - 1] == ' ')
        cnt--;
    cout << cnt;

    return 0;
}
