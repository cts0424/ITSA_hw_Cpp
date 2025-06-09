#include <iostream>
using namespace std;

int main() {
    int x;
    int bin[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    int pin = 0;

    cin >> x;

    if (x < 0) {
        pin = 1;
        x *= -1;
    }

    for (int i = 7; x > 0 && i >= 0; i--) {
        bin[i] = x % 2;
        x /= 2;
    }

    if (pin == 1) {
        for (int i = 0; i < 8; i++) {
            bin[i] = 1 - bin[i];
        }
        for (int i = 7; i >= 0; i--) {
            if (bin[i] == 0) {
                bin[i] = 1;
                break;
            } else {
                bin[i] = 0;
            }
        }
    }

    for (int i = 0; i < 8; i++) {
        cout << bin[i];
    }
    cout << endl;

    return 0;
}
