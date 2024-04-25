#include <iostream>
#include <string>
using namespace std;

int main() {
// declaring and initializing an array 
     string arr[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
// determine the size of the array
     int size = sizeof(arr) / sizeof(arr[0]);
// iterating  each element 
     for (int i = 0; i < size; ++i) {
// checking each element if it starts letter B
    if (arr[i].at(0) == 'B') {
// displaying the element to console
    cout << arr[i] << endl;
        }
    }
    return 0;
}
