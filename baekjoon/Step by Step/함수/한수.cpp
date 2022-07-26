#include <iostream>

using std::cin;
using std::cout;

int arithmetic_sequence(int num)
{
    int cnt = 0;

    if (num < 100)
    {
        return num;
    }

    else
    {
        cnt = 99;

        for (int i = 100; i <= num; i++)
        {
            int hun = i / 100;
            int ten = (i / 10) % 10;
            int one = i % 10;

            if ((hun - ten) == (ten - one))
            {
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{

    int N;

    cin >> N;

    int result = arithmetic_sequence(N);
    cout << result;

    return 0;
}