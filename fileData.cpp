#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int countVowels(const string& str);
int countWords(const string& str);
string Reverse(const string& str);
string capitalizeSecondLetter(const string& str);

int main() {
ifstream inFile("text_file.txt");
string fileData, line;

if (!inFile.is_open()) {
cout << "Error: Unable to open file 'text_file.txt'" << endl;
return 1;
    }

while (getline(inFile, line)) {
fileData += line;
    }

inFile.close();

if (fileData.empty()) {
cout << "Error: File 'text_file.txt' is empty" << endl;
return 1;
    }

cout << "Number of vowels: " << countVowels(fileData) << endl;
cout << "Number of words: " << countWords(fileData) << endl;
cout << "Reversed text: " << Reverse(fileData) << endl;
cout << "Capitalized second letters: " << capitalizeSecondLetter(fileData) << endl;

return 0;
}

int countVowels(const string& str) {
return count_if(str.begin(), str.end(), [](char c) {
return toupper(c) == 'A' || toupper(c) == 'E' || toupper(c) == 'I' || toupper(c) == 'O' || toupper(c) == 'U';
    });
}

int countWords(const string& str) {
int count = 0;
size_t pos = 0;
while ((pos = str.find_first_not_of(" \n\t", pos)) != string::npos) {
count++;
pos = str.find_first_of(" \n\t", pos);
    }
return count;
}

string Reverse(const string& str) {
string reversedStr(str.rbegin(), str.rend());
return reversedStr;
}

string capitalizeSecondLetter(const string& str) {
string result = str;
for (size_t i = 1; i < result.size(); i += 2) {
result[i] = toupper(result[i]);
    }
return result;
}
