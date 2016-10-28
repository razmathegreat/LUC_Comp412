#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#pragma once


class LineItem {	
private:
		int key;
		std::vector <double> input;	


public:
	LineItem();
	LineItem(std::string);

	int getKey();
	std::vector<double> getIntegers();
};
	
LineItem::LineItem (std::string in) {
	
	std::vector< double > vect;
	//std::stringstream ss(in);

	std::string delimiter = ",";
	size_t pos = 0;
	std:: string token;
	double j;
	int i=0;
	int k;
	//ss >> i;
	//key = i;

	//Remove the quotation marks
	in.erase(
		remove(in.begin(), in.end(), '\"'),
		in.end()
		);

	while ((pos = in.find(delimiter)) != std::string::npos)
	{
		token = in.substr(0, pos);
		in.erase(0, pos + delimiter.length());
		char* tarray = new char[token.length() + 1];
		strcpy(tarray, token.c_str());
		if (i == 0){
			k = stoi(token);
		}
		else{
			vect.push_back(stod(token));
		}
		i++;
	}

	/*while (ss >> j) {
		vect.push_back(j);

		if (ss.peek() == '"' || ss.peek() == ',' || ss.peek() == ' ')
			ss.ignore();
	}	*/
	input = vect;
}
int LineItem::getKey() {
	return key;
}

std::vector<double> LineItem::getIntegers() {
	return input;
}
