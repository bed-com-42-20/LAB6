#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Initialize random number generator with a different initial value
    srand(static_cast<unsigned int>(time(nullptr)) + 45);

    // Generate a random number between 0 and 11
    int daysUntilExpiration = rand() % 12;

    // Display the number of days until expiration
    cout << "Your subscription's remaining days:" << daysUntilExpiration << endl;

    // Check subscription status and provide a message using if-else statements
    if (daysUntilExpiration == 0) {
        cout << "Your subscription has expired." << endl;
    } else if (daysUntilExpiration == 1) {
        cout << "Your subscription expires within a day!" << endl;
        cout << "Renew now and save 20%!" << endl;
    } else if (daysUntilExpiration >= 2 && daysUntilExpiration <= 5) {
        cout << "Your subscription expires in " << daysUntilExpiration << " days." << endl;
        cout << "Renew now and save 10%!" << endl;
    } else if (daysUntilExpiration >= 6 && daysUntilExpiration <= 10) {
        cout << "Your subscription will expire soon. Renew now!" << endl;
    } else {
        cout << "You have an active subscription." << endl;
    }

    return 0;
}