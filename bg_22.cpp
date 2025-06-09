#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr(8, 0);
    int pin = 0;

    if (n < 0) {
        pin = 1;
        n *= -1;
    }

    for (int i = 7; n && i >= 0; i--) {
        if (n % 2 == 1) {
            arr[i] = 1;
        }
        n /= 2;
    }

    if (pin == 1) {
        for (int i = 0; i < 8; i++) {
            arr[i] = arr[i] == 1 ? 0 : 1;
        }
        int j = 7;
        while (j >= 0) {
            if (arr[j] == 1) {
                arr[j] = 0;
            } else {
                arr[j] = 1;
                break;
            }
            j--;
        }
    }

    for (int i = 0; i < 8; i++) {
        std::cout << arr[i];
    }
    std::cout << std::endl;

    return 0;
}
