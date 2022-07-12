#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::fixed;
using std::ios_base;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0);

    int n, n2, cnt, avg;
    int array[1000] = {};
    double result;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        avg = 0;
        cnt = 0;
        cin >> n2;

        for (int j = 0; j < n2; j++)
        {
            cin >> array[j];
            avg = avg + array[j];
        }

        avg = avg / n2;

        for (int k = 0; k < n2; k++)
        {
            if (array[k] > avg)
                cnt++;
        }

        result = ((double)cnt / n2) * 100;

        cout << fixed;
        cout.precision(3);
        cout << result << "%"
             << "\n";
    }
    return 0;
}
