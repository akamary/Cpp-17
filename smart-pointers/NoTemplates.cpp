#include <iostream>
#include <string>


void Print(int value) {
	std::cout << value << '\n';
}

void Print(float value) {
	std::cout << value << '\n';
}

void Print(std::string value) {
	std::cout << value << '\n';
}

int main() {
	
	Print(5);
	Print("hey");
	Print(5.5f);

	return 0;
}