#include <iostream>

using std::cin;
using std::cout;

int main()
{
    double h, b, c, sum;

    scanf_s("%lf %lf %lf", &h, &b, &c);
    sum = (h * b * c);

    printf("%.02lfMB", sum / (8 * 1024 * 1024));

    return 0;
}
