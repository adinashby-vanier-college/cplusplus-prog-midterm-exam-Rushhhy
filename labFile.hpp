/* ONLY WRITE THE ANSWER TO THE QUESTIONS IN THE CORRESPONDING METHODS */

#ifndef LABFILE_HPP
#define LABFILE_HPP

#include <iostream>

using namespace std;

double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9 + 273.15;;
}

bool isPrime(int n) {
    if (n == 0 || n == 1) {
        return false;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int sumOfPrimes(int limit) {
    int sum = 0;
    bool numberIsPrime = false;

    for (int i = 2; i <= limit; i++) {
        bool numberIsPrime = true;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                numberIsPrime = false;
            }
        }

        if (numberIsPrime) {
            sum += i;
        }
    }

    return sum;
}

int reverseInteger(int num) {
    return 0;
}

void printInvertedHalfStarPyramid(int rows) {
    int rowOutput = rows;

    if (rows == 0) {
        cout << "" << endl;
    }

    while (rowOutput > 0) {
        for (int i = 1; i <= rowOutput; i++) {
            cout << "* ";

            if (i == rowOutput) {
                cout << endl;
            }
        }
        rowOutput--;
    }
}


#endif
