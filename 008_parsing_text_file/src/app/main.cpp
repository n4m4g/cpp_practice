#include <iostream>
#include <fstream>

using namespace std;

int main() {
	fstream inFile;

	string fname = "../../src/app/text.txt";
	inFile.open(fname, ios::in);

	if(!inFile.is_open()) {
		return 1;
	}

	while(inFile) {
		string line;
		getline(inFile, line, ':');

		// here only read the integer
		int num;
		inFile >> num;

		// ignore \n
		inFile.ignore();

		if(!inFile) {
			inFile.close();
			break;
		}

		cout << "'" << line << "' -- '" << num << "'" << endl;
	}

	return 0;

}
