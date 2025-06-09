#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
	int w,h;
    cin >> w >> h;
    double BMI,temp;

    temp = h * h;
    temp /= 10000;
    BMI = w / temp;
	
    cout << fixed << setprecision(2);
    cout << BMI << "\n";
	
	return 0;
}
