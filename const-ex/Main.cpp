#include <iostream>
#include <string>

class Entity {
private: 
	int m_X, m_Y;
	mutable int var; 
					
public:
	
	 int GetX() const {
		 var = 2; 
		return m_X;
	}

	 int GetX() {
		 return m_X;
	 }

	void SetX(int x) {
		m_X = x;
	}
};

// pass this object by constant ref because
// we don't want to copy the entity 
// calling the method decalred with const
void PrintEntity(const Entity& e) {
	
	std::cout << e.GetX() << '\n';
}

int main() {

	Entity e;

	const int MAX_AGE = 90;

	const int* const a = new int;

	*a = 2;
	a = (int*)&MAX_AGE;
	a = nullptr;
	
	std::cout << *a << '\n';

	return 0;
}