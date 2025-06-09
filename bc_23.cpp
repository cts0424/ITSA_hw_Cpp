#include <iostream>
using namespace std;

int main() {
    int n, a, b, c;
    int total = 0;
    char comma;

    cin >> n >> comma >> a >> comma >> b >> comma >> c;

    total = a * 15 + b * 20 + c * 30;
    if (n < total) {
        cout << 0 << endl;
        return 0;
    }

    int temp = n - total;
    int arr[3] = {50, 5, 1};
    int ans[3] = {0, 0, 0};

    for (int i = 0; i < 3; i++) {
        ans[i] = temp / arr[i];
        temp %= arr[i];
    }

    for (int i = 2; i >= 0; i--) {
        cout << ans[i];
        if (i > 0) cout << ",";
    }
    cout << endl;

    return 0;
}
