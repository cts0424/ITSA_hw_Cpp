#include <iostream>
using namespace std;

int main(void)
{
	int N;
    cin >> N;

    int ten=0,five=0,one=0;
    if(N/10){
        ten = N / 10; 
        N %= 10;
    }
    if(N/5){
        five = N / 5;
        N %= 5;
    }
    one = N;
    
    cout << "NT10=" << ten << "\nNT5=" 
    << five << "\nNT1=" << one << "\n";
 	
	return 0;
}
