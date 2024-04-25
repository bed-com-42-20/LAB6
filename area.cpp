#include <iostream>
using namespace std;

//declarations of functions
double calculateArea(int shape);

int main() {
int choice;
double base, height, length, width, side;

while (true) {
//displaying menu and get user's choice
 cout << "Choose a shape to calculate the area:\n"
<< "1. Triangle\n"
<< "2. Rectangle\n"
<< "3. Square\n"
<< "4. Quit\n"
<< "Enter choice (1-4): ";
cin >> choice;

if (choice == 4) {
 cout << "Exiting the program." << endl;
 break;
        }

switch (choice) {
case 1:
cout << "Enter the base and height of the triangle: ";
cin >> base >> height;
cout << "Area of the triangle: " << 0.5 * base * height << endl;
break;
case 2:
cout << "Enter the length and width of the rectangle: ";
cin >> length >> width;
cout << "Area of the rectangle: " << length * width << endl;
break;
case 3:
cout << "Enter the side length of the square: ";
cin >> side;
cout << "Area of the square: " << side * side << endl;
break;default:
cout << "Invalid input! Please enter a number between 1 and 4." << endl;
break;
        }
    }

return 0;
}
