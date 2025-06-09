#include <iostream>
#include <iomanip>

using namespace std; 

int main(){
	int height,base;
    cin >> height >> base;

    double temp = base*height;

    double area = temp/2.0;

    cout << fixed << setprecision(1);
    cout << "Triangle area:" << area << endl;

	return 0;
}
