#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main(void)
{

    string str;
    int array[26] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};
    int sum = 0, index = 0;

    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        index = str[i] - 65;
        sum += array[index];
    }

    cout << sum;
    return 0;
}