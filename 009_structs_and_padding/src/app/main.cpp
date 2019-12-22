#include <iostream>

using namespace std;

#pragma pack(push, 1)
struct Person0 {
	char name[50]; // 1 byte
	int age; // 4 bytes
	double weight; // 8 bytes

	// actual size
	// 50 * 1 + 1 * 4 + 1 * 8 = 62 bytes
};
#pragma pack(pop)

struct Person1 {
	char name[50]; // 1 byte
	int age; // 4 bytes
	double weight; // 8 bytes

	// actual size
	// 50 * 1 + 1 * 4 + 1 * 8 = 62 bytes
	// padding 62 bytes to 64 bytes
	// 62 + 2 = 64 bytes
};

int main() {

	cout << "w/ padding: "  << sizeof(Person0) << endl;
	cout << "w/o padding: " << sizeof(Person1) << endl;

	return 0;
}
