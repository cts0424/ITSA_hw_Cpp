#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 0) {
        cout << "NO" << endl;
    }

    if (n % 2 == 0 || n % 5 == 0) {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 3; i < n; i += 2) {
        if (n % i == 0) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
