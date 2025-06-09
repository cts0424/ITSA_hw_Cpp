#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cin >> n;

	for(int i=0 ; i<n ; i++){
		int m,x=1;

		cin >> m;
		if(m > 31){
			cout << "Value of more than 31\n";
			continue; 
		}
		x <<= m;

		cout << x << "\n";
	}
	
	return 0;
}
