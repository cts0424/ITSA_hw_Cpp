#include <iostream>
using namespace std;

int main() {
    double x, y;
    double squared_r = 100 * 100;

    cin >> x >> y;

    double squared_distance = x * x + y * y;

    if (squared_distance <= squared_r) {
        cout << "inside" << endl;
    } else {
        cout << "outside" << endl;
    }

    return 0;
}
