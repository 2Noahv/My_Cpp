#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()

{
	int A, B;

	cin >> A >> B;

	cout << (B % 10) * A << endl;
	cout << ((B % 100) / 10) * A << endl;
	cout << (B / 100) * A << endl;
	cout << A* B << endl;

	return 0;
}