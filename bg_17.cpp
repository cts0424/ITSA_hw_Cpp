#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
	int hours,preHour;
	double salary = 0;
	
	cin >> hours >> preHour;
	if(hours > 120){
		salary += ((hours-120)*preHour*1.66);
		hours = 120;
	}
	if(hours > 60){
		salary += ((hours-60)*preHour*1.33);
		hours = 60;
	}
	salary += (hours*preHour);
	
	cout << fixed << setprecision(1);
	cout << salary << "\n";
	return 0;
}
