#include <iostream>
#include <algorithm> // Required for std::sort

const int SIZE = 5;

// Function prototypes
void getInput(int arr[], int size);
int countEvenNumbers(const int arr[], int size);
void displayArray(const int arr[], int size);
void displaySortedArray(int arr[], int size);

int main() {
    int numbers[SIZE];

    // 1. Get input from the user
    getInput(numbers, SIZE);

    // 2. Count even numbers
    int evenCount = countEvenNumbers(numbers, SIZE);

    // 3. Display the original array values
    std::cout << "\nValues stored in the array: ";
    displayArray(numbers, SIZE);

    // 4. Display the total count of even numbers
    std::cout << "\nTotal number of even numbers: " << evenCount << "\n";

    // 5. Display sorted array values
    std::cout << "Sorted values (ascending): ";
    displaySortedArray(numbers, SIZE);

    return 0;
}

// Function to populate the array with user input
void getInput(int arr[], int size) {
    std::cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; i++) {
        std::cout << "Number " << (i + 1) << ": ";
        std::cin >> arr[i];
    }
}

// Function to count even integers in the array
int countEvenNumbers(const int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

// Function to print array elements to the console
void displayArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

// Function to sort the array and display its elements
void displaySortedArray(int arr[], int size) {
    // std::sort modifies the array order in place
    std::sort(arr, arr + size);
    displayArray(arr, size);
}
