#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x_1, y_1, x_2, y_2;
    cin >> x_1 >> y_1 >> x_2 >> y_2;

    int x_temp = x_1 - x_2;
    int y_temp = y_1 - y_2;

    x_temp *= x_temp;
    y_temp *= y_temp;

    double distance = sqrt(x_temp + y_temp);

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << distance << endl;

    return 0;
}
