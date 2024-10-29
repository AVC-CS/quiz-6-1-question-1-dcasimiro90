
//********************
// Declare Function Prototypes
//********************

// ******************************
// Implement all your functions here
// ******************************


#include <iostream>
using namespace std;

void getTwoValues(int &begin, int &end);
int getNextPrime(int num);
int getPrevPrime(int num);
int isPrime(int num);

void getTwoValues(int &begin, int &end) {
    cout << "Enter two integer values (begin < end): ";
    cin >> begin >> end;
    while (begin >= end) {
        cout << "Error: 'begin' must be less than 'end'. Please re-enter values.\n";
        cin >> begin >> end;
    }
}

int getNextPrime(int num) {
    int nextPrime = num + 1;
    while (isPrime(nextPrime) == 0) { 
        nextPrime++;
    }
    return nextPrime;
}

int getPrevPrime(int num) {
    int prevPrime = num - 1;
    while (prevPrime > 1 && isPrime(prevPrime) == 0) {
        prevPrime--;
    }
    return prevPrime;
}

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}