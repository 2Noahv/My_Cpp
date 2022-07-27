#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int r;
        string str;
        cin >> r;
        cin >> str;

        for (int j = 0; j < str.length(); j++)
        {
            for (int k = 0; k < r; k++)
            {
                printf("%c", str[j]);
            }
        }
        printf("\n");
    }

    return 0;
}