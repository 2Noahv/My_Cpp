#include <iostream>

using std::cin;
using std::cout;

int main()
{

    int A, B, V;
    cin >> A >> B >> V;

    int day = 0;

    if ((V - A) % (A - B) == 0)
        day = (V - A) / (A - B);
    else
        day = (V - A) / (A - B) + 1;

    cout << day + 1 << "\n";
    return 0;

    // 정수로 표현하기 때문에 +1일을 더해준다.
}