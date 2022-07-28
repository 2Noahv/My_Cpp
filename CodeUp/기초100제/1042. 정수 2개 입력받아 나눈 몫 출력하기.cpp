#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int integer1, integer2;

    cin >> integer1 >> integer2;

    int division;

    division = integer1 / integer2;

    cout << division;

    /*
        간단한 방법
        int a, b;
        scanf("%d%d", &a, &b);
        printf("%d", a/b);
    */

    return 0;
}
