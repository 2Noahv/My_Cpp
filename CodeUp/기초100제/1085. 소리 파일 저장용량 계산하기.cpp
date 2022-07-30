#include <iostream>

int main()
{
    double h, b, c, s, sum;

    scanf("%lf %lf %lf %lf", &h, &b, &c, &s);
    sum = h * b * c * s;

    printf("%.1lf MB", sum / 8388608);

    return 0;
}
