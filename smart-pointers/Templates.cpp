#include <iostream>
#include <string>

template<typename T>
void Print(T value) {
	std::cout << value << '\n';
}


int main() {

	/*Print(5);
	Print("hey");
	Print(5.5f);*/

	Print<int>(5);
	Print<int>(6);
 Print(5);
	Print("hey");
	Print(5.5f);
	

	return 0;
}