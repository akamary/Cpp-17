#include <iostream>

using std::cout;
using std::cin;

int main() {

	cout << "Hello !\n";
	cout << 2 + 2 << "\n";

	int i = 2 + 2;
	cout << i << "\n";

	i = i * 3;
	cout << i << "\n";

	int j = 2;

	i = 4.9;
	j = 9 / 5;
	cout << "i: " << i << "  j: " << j << '\n';

	float f = 4.9;
	cout << f << '\n';

	f = 9 / 5;
	cout << f << '\n';

	f = 9.0 / 5;
	cout << f << '\n';

	f = 9.3 / 5;
	cout << f << '\n';

	cout << "Enter a number: ";
	cin >> i;
	cout << i;

	cin.get();  // Wait for a key press before closing the console window
	return 0;
}