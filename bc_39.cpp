#include <iostream>
using namespace std;

int main() {
    int n, test[3];
    cin >> n;

    for (int i = 0; i < n; i++) {
        int k = 0, total = 0;
        cin >> test[0] >> test[1] >> test[2];

        for (int j = 0; j < 3; j++) {
            if (test[j] < 60) {
                k++;
            }
        }

        if (test[0] >= 60 && test[1] >= 60 && test[2] >= 60) {
            cout << "P" << endl;
        } else if (k == 1) {
            for (int j = 0; j < 3; j++) {
                total += test[j];
            }
            if (total >= 220) {
                cout << "P" << endl;
            } else {
                cout << "M" << endl;
            }
        } else {
            for (int j = 0; j < 3; j++) {
                if (test[j] >= 80) {
                    cout << "M" << endl;
                    break;
                }
                if (j == 2) {
                    cout << "F" << endl;
                }
            }
        }
    }

    return 0;
}
