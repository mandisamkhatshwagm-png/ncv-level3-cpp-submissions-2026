
#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::fixed << std::setprecision(2);

    // --- 1. PRODUCT SECTION (Fixes Integer Division using 3.0) ---
    double prod1 = 70, prod2 = 85, prod3 = 90;
    double productAverage = (prod1 + prod2 + prod3) / 3.0;

    std::cout << "--- Product Summary ---\n";
    std::cout << "Total Product Cost: R" << (prod1 + prod2 + prod3) << "\n";
    std::cout << "Average Product Price: R" << productAverage << "\n\n";

    // --- 2. WAGES SECTION (Calculates Gross & Net with 1% UIF) ---
    double hourlyRate = 85.00;
    double hoursWorked = 40.0;

    double grossWage = hourlyRate * hoursWorked;
    double uifDeduction = grossWage * 0.01; // 1% UIF
    double netWage = grossWage - uifDeduction;

    std::cout << "--- Employee Wages ---\n";
    std::cout << "Gross Wage: R" << grossWage << "\n";
    std::cout << "UIF Deduction (1%): R" << uifDeduction << "\n";
    std::cout << "Net Take-Home Pay: R" << netWage << "\n";

    return 0;
}
