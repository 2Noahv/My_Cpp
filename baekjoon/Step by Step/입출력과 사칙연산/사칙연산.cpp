#include <iostream>

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;

	int A, B = 0;

	cin >> A >> B;

	cout << A + B << endl;
	cout << A - B << endl;
	cout << A * B << endl;
	cout << A / B << endl;
	cout << A % B;
	
	return 0;
}