#include <iostream>

using namespace std;

const int MATRIX_SIZE = 5;

bool isPrime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }

    return true;
}

void displayRowsWithTwoPrimes(int matrix[MATRIX_SIZE][MATRIX_SIZE]) {
    int primeCounter;
    bool rowsFound = false;

    for (int i = 0; i < MATRIX_SIZE; i++) {
        primeCounter = 0;

        for (int j = 0; j < MATRIX_SIZE; j++) {
            if (isPrime(matrix[i][j])) primeCounter++;
        }

        if (primeCounter >= 2) rowsFound = true;
        else cout << "Row with index " << i << " containing less than two prime numbers" << endl;
    }

    if (!rowsFound) {
        cout << "No row found containing two prime numbers" << endl;
    }
}


int main() {
    int matrix[MATRIX_SIZE][MATRIX_SIZE];

    cout << "Enter square matrix "
        << MATRIX_SIZE << "x" << MATRIX_SIZE << ":"
        << endl;
    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            cin >> matrix[i][j];
        }
    }

    displayRowsWithTwoPrimes(matrix);

    return 0;
}
