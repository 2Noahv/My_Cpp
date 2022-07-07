#include <iostream>

int main()
{
	using std::cin;
	using std::cout;
	using std::fixed;

	int A, B = 0;

	cin >> A >> B;

	cout.precision(10);
	// precision() 역할은 출력 할 실수 전체 자리수를 n자리로 표현한다.
	cout << fixed;
	// fixed 역할은 정수 부분은 신경쓰지 않고 소수점 아래로만 고정하고 싶은 경우 사용한다.
	cout << (double)A / B;
	
	return 0;
}