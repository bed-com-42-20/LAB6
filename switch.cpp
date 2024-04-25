#include <iostream>
using namespace std;
int main() {
int value;
while (true) {
cout << "Enter an integer value between 5 and 10: ";
cin >> value;
if (value >= 5 && value <= 10) {
cout << "Your input value (" << value << ") has been accepted." << endl;
break;
 } else {
cout << "Sorry, you entered an invalid number. Please try again." << endl;
        }
    }

return 0;
}
