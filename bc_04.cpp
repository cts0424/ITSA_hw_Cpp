#include <iostream>
using namespace std;

int main() {
    int hour_in, min_in, hour_out, min_out;
    int temp_hour, temp_min, temp;
    int money = 0;

    cin >> hour_in >> min_in >> hour_out >> min_out;

    if (min_out > min_in) {
        temp_min = min_out - min_in;
    } else {
        temp_min = min_out + 60 - min_in;
        hour_out--;
    }

    if (hour_out < hour_in) {
        temp_hour = hour_out + 24 - hour_in;
    } else {
        temp_hour = hour_out - hour_in;
    }

    temp = (temp_hour * 60 + temp_min) / 30;

    if (temp > 4) {
        money = 30 * 4;
        temp -= 4;
    } else {
        money = 30 * temp;
        temp = 0;
    }

    if (temp > 4) {
        money += 40 * 4;
        temp -= 4;
        if (temp >= 1) {
            money += 60 * temp;
        }
    } else {
        money += 40 * temp;
    }

    cout << money << endl;

    return 0;
}
