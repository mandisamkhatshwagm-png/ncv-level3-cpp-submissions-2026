
#include <iostream>
#include <iomanip>
#include <string>
#include <limits> // Required for std::numeric_limits

int main() {
    // --- PART 1: GETLINE FIX (Buffer Management) ---
    int studentNumber;
    std::string studentName;

    std::cout << "========================================\n";
    std::cout << "         CAMPUS PROFILE REGISTRATION    \n";
    std::cout << "========================================\n";

    std::cout << "Enter TUT Student Number: ";
    std::cin >> studentNumber;

    // FIX: Flushes the hidden newline character '\n' out of the input stream
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter Full Name and Surname: ";
    std::getline(std::cin, studentName); // Safely captures spaces without skipping

    // --- PART 2: RECEIPT GENERATION (Formatted Checkout Layout) ---
    std::string item1 = "Textbook", item2 = "Lab Coat", item3 = "Scientific Calc";
    double price1 = 350.00, price2 = 275.50, price3 = 199.90;
  double subtotal = price1 + price2 + price3;
    double vatAmount = subtotal * 0.15; // Standard 15% VAT
    double grandTotal = subtotal + vatAmount;

    // Printing Aligned Receipt Output
    std::cout << "\n========================================\n";
    std::cout << "         TUT CAMPUS BOOKSTORE           \n";
    std::cout << "========================================\n";
    std::cout << "Account: " << studentNumber << "\n";
    std::cout << "Buyer  : " << studentName << "\n";
    std::cout << "----------------------------------------\n";

    // Header alignment structure
    std::cout << std::left << std::setw(25) << "Item Description"
              << std::right << std::setw(15) << "Price (R)" << "\n";
    std::cout << "----------------------------------------\n";

    // Item line printing explicitly scaled to 2 decimal places
    std::cout << std::fixed << std::setprecision(2);
    std::cout << std::left << std::setw(25) << item1 << std::right << std::setw(15) << price1 << "\n";
    std::cout << std::left << std::setw(25) << item2 << std::right << std::setw(15) << price2 << "\n";
    std::cout << std::left << std::setw(25) << item3 << std::right << std::setw(15) << price3 << "\n";

    std::cout << "----------------------------------------\n";
    std::cout << std::left << std::setw(25) << "Subtotal:" << std::right << std::setw(15) << subtotal << "\n";
    std::cout << std::left << std::setw(25) << "VAT (15%):" << std::right << std::setw(15) << vatAmount << "\n";
    std::cout << "========================================\n";
    std::cout << std::left << std::setw(25) << "GRAND TOTAL:" << std::right << std::setw(15) << grandTotal << "\n";
    std::cout << "========================================\n";

    return 0;
}
