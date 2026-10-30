#include <iostream>
#include <iomanip>

int main() {
    const int MAX_TRIPS = 100; // Maximum size for our array
    int tripsArray[MAX_TRIPS];  // Array to store passengers per valid trip

    int tripCount = 0;
    int totalPassengers = 0;
    const double FARE = 18.00;
    int inputPassengers;

    std::cout << "--- Taxi Day Log System ---\n";
    std::cout << "Enter passengers per trip (1-15). Enter 0 to end the day:\n\n";

    // Loop for receiving inputs until 0 is entered
    while (true) {
        std::cout << "Enter passengers for trip " << (tripCount + 1) << ": ";
        std::cin >> inputPassengers;

        // 1. Check for Sentinel Value (0 ends the day)
        if (inputPassengers == 0) {
            break;
        }

        // 2. Input Validation (Must be between 0 and 15)
        if (inputPassengers < 0 || inputPassengers > 15) {
            std::cout << "Invalid input! Passengers must be between 0 and 15. Trip ignored.\n";
            continue; // Skip the rest of the loop and ask again
        }

        // 3. Prevent Array Overflow
        if (tripCount >= MAX_TRIPS) {
            std::cout << "Maximum daily trip log capacity reached.\n";
            break;
        }

        // 4. Store the valid trip into the array
        tripsArray[tripCount] = inputPassengers;
        totalPassengers += inputPassengers;
        tripCount++;
    }

    // 5. Process data to find the busiest trip using the array
    int busiestTrip = 0;
    for (int i = 0; i < tripCount; i++) {
        if (tripsArray[i] > busiestTrip) {
            busiestTrip = tripsArray[i];
        }
    }

    // Calculate income
    double totalIncome = totalPassengers * FARE;

    // 6. Report Outputs
    std::cout << "\n==============================\n";
    std::cout << "DAILY SUMMARY REPORT\n";
    std::cout << "==============================\n";
    std::cout << "Trips:         " << tripCount << "\n";
    std::cout << "Passengers:    " << totalPassengers << "\n";

    // Format currency to 2 decimal places
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Income:        R" << totalIncome << "\n";
    std::cout << "Busiest trip:  " << busiestTrip << " passengers\n";

    return 0;
}
