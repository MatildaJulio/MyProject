#include <iostream>
#include <limits>
#include <cctype>
#include <string>
#include <fstream>

using namespace std;

void reverse(string str);
void secLetterToUpper(string& str);
void numberOfVawels(string str);
void numberOfWords(string str);


int main(int argc, char const *argv[])
{

	string filname = "file.txt";
	string fileData;
	ifstream file;
	file.open(filname);
	if(!file.is_open()) {
		cout << "Error: Failed to open the file " << filname << endl;
	} else {
		while(getline(file,fileData)) {
			cout << fileData << endl;
		}
	}
	
	numberOfVawels(fileData);
	
	numberOfWords(fileData);
	cout << "---------------------------------------------------------------" << endl;
	cout << "Printing fileData in reverse" << endl;
	
	reverse(fileData);
	cout << "---------------------------------------------------------------" << endl;
	cout << "Printing captalized second letter of each words in fileData" << endl;
	
	secLetterToUpper(fileData);

	return 0;
}

void reverse(string str) {
    int size = str.length();
    char temp;
    for (int i = 0; i < size / 2; i++) {
        temp = str[i];
        str[i] = str[size - i - 1];
        str[size - i - 1] = temp;
    }

    std::cout << str << std::endl;
}

void secLetterToUpper(string& str) {
	string arry[10];
	int wordCount = 0;
	string word;
	
	for(char charecter: str) {
		if(charecter != ' ') {
			word += charecter;
		} else {
			if(!word.empty()) {
				arry[wordCount++] = word;
				word.clear();
			}
		}
	}

	if (!word.empty() && wordCount < 10) {
        arry[wordCount++] = word;
    }


	for(string words: arry) {
		words[1] = toupper(words[1]);
		cout << words <<  endl;
	}

}

void numberOfVawels(string str) {
	char arry[] = {'a','e','i','o','u'};
	int vawelFound = 0;
	int size = sizeof(arry) / sizeof(arry[0]);
	for(int i = 0; i < str.length(); i++) {
		for(int k = 0; k < size; k++) {
			if(tolower(str[i]) == arry[k] ) {
				vawelFound ++;
			}
		}
	}
	cout << "found the following Vawels in the file: " << vawelFound << endl;
}

void numberOfWords(string str) {
	int spaceCount = 0;
	for(char words:str) {
		if(isspace(words)) {
			spaceCount++;
		}
	}

	if(str.at(0) == ' ') {
		cout << "Total words: " << spaceCount << endl;
	} else {
		cout << "Total words: " << spaceCount + 1 << endl;
	}
}
