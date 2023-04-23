#include <iostream>
#include <string>
#include <vector>

struct Vertex{

	float x, y, z;
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex) {
	stream << vertex.x << "," << vertex.y << "," << vertex.z;
	return stream;
}

int main() {
	std::vector<Vertex> vertices;
	//vertices.push_back({ 1,2,3 });
	//vertices.push_back({ 4,5,6 });
	vertices.push_back({ 2,4,5 });
	vertices.push_back({ 6,7,98 });

	for (int i = 0; i < vertices.size(); i++) {
		std::cout << vertices[i] << '\n';
	}

	// ----clearing the vector, size=0----
	//vertices.clear();

	vertices.erase(vertices.begin() + 1);

	// ----avoid ! it's copying all the vector<Vertex>----
	//for (Vertex v: vertices) {
	//	std::cout << v << '\n';
	//}

	// ----adding & to make it reference, not copying data----
	for (Vertex& v : vertices) {
		std::cout << v << '\n';
	}

	return 0;
}