#include <iostream>
#include <fstream>

using namespace std;

int main() {
	// ifstream inFile;
	fstream inFile;

	// file name
	string fname = "../../src/app/text.txt";

	// inFile.open(fname);
	inFile.open(fname, ios::in);

	// check whether the file is open
	if(inFile.is_open()) {
		// a temp string variable to store line from getline
		string line;
		while(inFile) {
			getline(inFile, line);
			cout << line << endl;
		}
		// close the file after reading
		inFile.close();
	} else {
		cout << "Could not open file: " << fname << endl;
	}

	return 0;
}
