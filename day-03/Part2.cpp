#include <iostream>
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
    int x, y;

    // Prompt user for input
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;

    cout << "\n--- Results ---\n";

    // Calling all functions inside main
    cout << "Sum:        " << getSum(x, y) << "\n";
    cout << "Difference: " << getDiff(x, y) << "\n";
    cout << "Product:    " << getProd(x, y) << "\n";

    // Safety check for division
    if (y == 0) {
        cout << "Quotient:   Error (Div by 0)\n";
    } else {
        cout << "Quotient:   " << getQuot(x, y) << "\n";
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
