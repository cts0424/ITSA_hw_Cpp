#include <iostream>
using namespace std;

int main(void)
{
	int n,total=0;
    cin >> n;

    if(n >= 100){
        total = n*70;
    }else if(n >= 30){
        total = n*80;
    }else if(n >= 10){
        total = n*90;
    }else{
        total = n*100;
    }
	
	cout << total << endl;
    
	return 0;
}
