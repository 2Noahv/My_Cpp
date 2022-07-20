#include <iostream>

// using std::cin;
// using std::cout;
// using std::fixed;

int main()
{
    int yyy, mm, dd;

    scanf("%d.%d.%d", &yyy, &mm, &dd);

    printf("%04d.%02d.%02d", yyy, mm, dd);

    return 0;
}