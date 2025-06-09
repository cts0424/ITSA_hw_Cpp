#include <iostream>
using namespace std;

int main(void)
{
    int n;
    int total = 0;

    cin >> n;
    for(int i = 1 ; i*6 < n ; i++){
        if((i*6)%12 != 0 ){
            total += (i*6);
        }
    }
	cout << total << "\n";
	
	return 0;
}
