#include <iostream>
using namespace std;

int recursive(int n) {
    if (n == 1) {
        return n + 1;
    } else if (n == 0) {
        return n + 1;
    }
    return recursive(n - 1) + recursive(n / 2);
}

int main() {
    int n;
    cin >> n;

    int total = recursive(n);
    cout << total << endl;

    return 0;
}
