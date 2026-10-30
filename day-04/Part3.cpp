#include <iostream>
#include <cstdlib> // Required for rand() and srand()
#include <ctime>   // Required for time() to seed random numbers

using namespace std;

// ==========================================
// FUNCTION PROTOTYPES (Declarations)
// ==========================================
int getSum(int a, int b);
int getDiff(int a, int b);
int getProd(int a, int b);
double getQuot(int a, int b);

// ==========================================
// MAIN FUNCTION
// ==========================================
int main() {
    // Seed the random number generator using the current system time
    srand(time(0));

    // Generate two random numbers between 1 and 50
    int x = (rand() % 50) + 1;
    int y = (rand() % 50) + 1;

    char op;

    cout << "--- Random Math Challenge ---\n";
    cout << "Generated Numbers: " << x << " and " << y << "\n\n";

    // Prompt user for an operator
    cout << "Enter a math operator (+, -, *, /): ";
    cin >> op;

    cout << "\n--- Result ---\n";

    // Switch statement to determine which function to call
    switch (op) {
        case '+':
            cout << x << " + " << y << " = " << getSum(x, y) << "\n";
            break;

        case '-':
            cout << x << " - " << y << " = " << getDiff(x, y) << "\n";
            break;

        case '*':
            cout << x << " * " << y << " = " << getProd(x, y) << "\n";
            break;

        case '/':
            // Safety check for division by zero
            if (y == 0) {
                cout << "Error: Division by zero is not allowed!\n";
            } else {
                cout << x << " / " << y << " = " << getQuot(x, y) << "\n";
            }
            break;

        default:
            cout << "Invalid operator choice! Please restart and use +, -, *, or /.\n";
            break;
    }

    return 0;
}

// ==========================================
// FUNCTION DEFINITIONS
// ==========================================
int getSum(int a, int b) {
    return a + b;
}

int getDiff(int a, int b) {
    return a - b;
}

int getProd(int a, int b) {
    return a * b;
}

double getQuot(int a, int b) {
    if (b == 0) return 0.0;
    return static_cast<double>(a) / b;
}


double getQuot(int a, int b) {
    if (b == 0) return 0.0;
    return static_cast<double>(a) / b;
}
