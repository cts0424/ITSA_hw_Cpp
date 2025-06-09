#include <iostream>
using namespace std;

int main() {
    int num;
    double km;

    cin >> num;
    km = num * 1.6;

    cout.setf(ios::fixed);
    cout.precision(1);
    cout << km << endl;

    return 0;
}
