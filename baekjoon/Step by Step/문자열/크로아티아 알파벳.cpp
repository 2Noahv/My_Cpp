#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main(void)
{

    string str;
    string array[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    int index;

    cin >> str;

    for (int i = 0; i < 8; i++)
    {
        while (true)
        {
            index = str.find(array[i]);
            if (index == string::npos)
                break;

            str.replace(index, array[i].length(), "#");
            // replace 함수 = 치환역할
        }
    }
    cout << str.length();

    return 0;
}