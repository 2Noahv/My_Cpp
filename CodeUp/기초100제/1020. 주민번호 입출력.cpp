#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int frt, rer;

    scanf_s("%d-%d", &frt, &rer);
    printf("%06d%d", frt, rer);

    return 0;
}