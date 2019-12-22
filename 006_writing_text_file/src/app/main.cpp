#include <iostream>
#include <fstream>

using namespace std;

int main() {
	// ofstream outFile;
	fstream outFile;

	// file name
	string fname = "text.txt";

	// outFile.open(fname);
	outFile.open(fname, ios::out);

	// check whether the file is open
	if(outFile.is_open()) {
		// endl is new line
		outFile << "Hello world 0" << endl;
		outFile << "Hello world 1" << endl;

		// close the file after writing
		outFile.close();
	} else {
		cout << "Could not create file: " << fname << endl;
	}

	return 0;
}
