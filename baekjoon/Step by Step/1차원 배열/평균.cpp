#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::fixed;
using std::ios_base;
using std::sort;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0);

    int N; // 시험 본 과목 개수
    double sum = 0;
    cin >> N;

    double arr[1001];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + N); // 배열 오름차순 정렬

    // 가장 큰 점수는 가장 마지막 인덱스에 위치하게 됨
    for (int i = 0; i < N; i++)
    {
        sum = sum + (arr[i] / arr[N - 1]) * 100; // (조작 된 성적 = (과목 / 최고 성적) * 100) 의 누적 합
    }

    cout << sum / N; // 성적 평균
    return 0;
}
