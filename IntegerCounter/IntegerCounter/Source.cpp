#include <iostream>;
#include <fstream>;
#include <string>;
#include <vector>;
#include "Header.h";
using namespace std;



int main() {
	int i = 0;
	string line;
	vector<LineItem> vect;
	ifstream file("./resources/test.csv");
	if (file.is_open()) {
		while (i < 100){
			getline(file, line);
			//cout << line << '\n';
			if (i != 0){
				LineItem Test(line);
				vect.push_back(Test);
				int j = 0;
				while (j < vect[i - 1].getIntegers().size()){
					cout << vect[i - 1].getIntegers().at(j)<<", ";
					j++;
				}
				cout << endl << endl;
				//cout << vect.at(0).getIntegers().at(0);
			}
			i++;
		}
		file.close();
	}
	else cout << "Unable to open file";
	cin >> i;


	return 0;
}
