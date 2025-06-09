#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int total = 0;

    for (int i = 1; i * 3 <= n; i++) {
        total += i * 3;
    }

    cout << total << endl;

    return 0;
}
