#include <iostream>
using namespace std;

int main(void)
{
	int inHour,inMin,outHour,outMin;
    cin >> inHour >> inMin >> outHour >> outMin;
	
	int total_hours,total_mins;
	int total = 0;
	if(outMin < inMin){
		outHour--;
		outMin += 60;
	}
	total_mins = outMin - inMin;
	total_hours = outHour - inHour;

	if(total_hours >= 4){
		total += (4*30 + 4*40);
		if(total_hours >= 4){
			total_hours -= 4;
			total_mins += (total_hours * 60);
			if(total_mins >= 30){
				total += ((total_mins/30) * 60 );
			}
		}
	}else if(total_hours >= 2){
		total += (4*30);
		if(total_hours >= 2){
			total_hours -= 2;
			total_mins += (total_hours * 60);
			if(total_mins >= 30){
				total += ((total_mins/30) * 40 );
			}
		}
	}else{
		total_mins += (total_hours * 60);
		total = (total_mins/30) * 30;
	}

	cout << total << "\n";
	
	return 0;
}
