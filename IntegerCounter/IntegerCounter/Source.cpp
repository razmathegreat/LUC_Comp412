#include <iostream>;
#include <fstream>;
#include <string>;
#include "Header.h"
using namespace std;


int main() {
	int i=0;
	string line;
	ifstream file("./resources/test.csv");
	if (file.is_open()) {
		while (i < 100){
			getline(file, line);
			cout << line << '\n';
			i++;
		}
		file.close();
	}
	else cout << "Unable to open file";
	cin >> i;
	
	
	return 0; 
}