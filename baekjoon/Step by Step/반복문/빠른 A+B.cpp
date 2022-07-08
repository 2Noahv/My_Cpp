#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios_base;

int main()
{
    ios_base::sync_with_stdio(false);
    // C와 C++ 버퍼를 분리하는 역할
    cin.tie(NULL);
    // cin, cout 묶음을 풀어주는 역할

    int A, B, num;

    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        cin >> A >> B;
        cout << A + B << "\n";
    }

    return 0;
}