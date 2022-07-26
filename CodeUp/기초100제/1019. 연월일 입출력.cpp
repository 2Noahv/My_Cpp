#include <iostream>

int main()
{
    int yyy, mm, dd;

    scanf_s("%d.%d.%d", &yyy, &mm, &dd);

    printf("%04d.%02d.%02d", yyy, mm, dd);

    return 0;
}