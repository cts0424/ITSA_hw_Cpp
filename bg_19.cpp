#include <iostream>
using namespace std;

int main(void){
	int a,b,temp;
	cin >> a >> b;

	while(b != 0){
		temp = b;
		b = a % b;
		a = temp;
	}
	cout << a << "\n";
	
	return 0;
}
