#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()

{
	
	int A,B,C;

	cin >> A >> B >> C;
	cout << (A + B) % C << endl;
	cout << ((A % C) + (B % C)) %C << endl;
	cout << (A * B) % C << endl;
	cout << ((A % C) * (B % C)) %C	;

	return 0;
}