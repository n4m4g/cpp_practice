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

	if(outFile.is_open()) {
		outFile << "Hello world" << endl;
		outFile.close();
	} else {
		cout << "Could not create file: " << fname << endl;
	}

	return 0;
}
