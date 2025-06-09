#include <iostream>
using namespace std;

int main(void){
	int n;
	cin >> n;

	int days,hours,mins,seconds;

	seconds = n % 60;
	n /= 60;
	
	mins = n % 60;
	n /= 60;

	hours = n % 24;
	n /= 24;

	days = n;
	
	cout << days << " days\n" << hours << " hours\n" << mins 
		<< " minutes\n" << seconds << " seconds\n";

	return 0;
}
