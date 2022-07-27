#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int yyy, mm, dd;

    scanf("%d.%d.%d", &yyy, &mm, &dd);

    printf("%02d-%02d-%04d", dd, mm, yyy);

    return 0;
}