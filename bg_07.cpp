#include <iostream>
using namespace std;

int main(void)
{
	int x,y,z;
    cin >> x >> y >> z;
    if(x < y){
        x = y;
    }
    if(x < z){
        x = z;
    }
	cout << x << endl;
	
	return 0;
}
