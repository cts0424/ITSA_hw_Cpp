#include <iostream>
#include <cmath>
#include <cstdbool>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int findLargestPrime(int n) {
    for (int i = n - 1; i >= 2; i--) {
        if (isPrime(i)) return i;
    }
    return -1;
}

int main() {
    int n;
    cin >> n;

    int largest_prime = findLargestPrime(n);
    if (largest_prime == -1) {
        cout << "No prime number less than " << n << endl;
    } else {
        cout << largest_prime << endl;
    }

    return 0;
}
