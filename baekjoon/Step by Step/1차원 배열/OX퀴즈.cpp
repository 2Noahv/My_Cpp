#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::ios_base;
using std::string;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0);

    int n;
    string s;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        int count = 0;
        int sum = 0;

        for (int j = 0; j < s.length(); j++)
        {

            if (s[j] != 'X')
                count++;

            else
                count = 0;
            sum += count;
        }
        cout << sum << "\n";
    }
    return 0;
}