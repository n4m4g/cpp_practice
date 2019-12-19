#include <iostream>
#include <fstream>

using namespace std;

int main() {
	// ifstream inFile;
	fstream inFile;

	// file name
	string fname = "../text.txt";

	// inFile.open(fname);
	inFile.open(fname, ios::in);

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
