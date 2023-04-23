#include <iostream>
#include <string>
#include <memory>

class Entity {
public:
	Entity() {
		std::cout << "Entity Creation !" << '\n';
	}

	~Entity() {
		std::cout << "Entity Destroyed !" << '\n';
	}

	void Print(){}

};

int main() {
	{
		std::weak_ptr<Entity> e0;
		{
			//std::unique_ptr<Entity> entity = std::make_unique<Entity>();
			//std::unique_ptr<Entity> entity(new Entity());

			std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
			
			e0 = sharedEntity;

			//entity->Print();
		}
		
	}
	

	return 0;
}