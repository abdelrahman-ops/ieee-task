#include <iostream>

using namespace std;

int reverseNumber(int num) {
    int reversedNum = 0;

    while (num != 0) {
        // Extract the last digit
        int digit = num % 10;

        // Check for leading zeros in the reversed number
        if (reversedNum != 0 || digit != 0) {
            reversedNum = reversedNum * 10 + digit;
        }

        // Remove the last digit from the original number
        num /= 10;
    }

    return reversedNum;
}

int main() {
    int userInput;

    // Get input from the user
    cout << "Enter a number: ";
    cin >> userInput;

    // Call the reverseNumber function and display the result
    int reversedResult = reverseNumber(userInput);
    cout << "Reversed Number: " << reversedResult << endl;

    return 0;
}
