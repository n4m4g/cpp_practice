#include <iostream>
#include <fstream>

using namespace std;

int main() {
	string fname = "../text.txt";
	ifstream inFile;
	inFile.open(fname);

	if(inFile.is_open()) {
		string line;
		while(inFile) {
			getline(inFile, line);
			cout << line << endl;
		}
		inFile.close();
	} else {
		cout << "Could not open file: " << fname << endl;
	}

	return 0;
}
