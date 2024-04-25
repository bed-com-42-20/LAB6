#include <iostream>
#include <sstream>

using namespace std;

int main() {
int number;

while (true) {
cout << "Enter an integer value between 5 and 10: ";
string input;
getline(cin, input);
        
stringstream myStream(input);
if (myStream >> number && number >= 5 && number <= 10)
break;

cout << "Invalid input. Please enter a number between 5 and 10." << endl;
    }
    
cout << "Your input value(" << number << ") has been accepted." << endl;
return 0;
}
