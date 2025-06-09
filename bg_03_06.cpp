#include <iostream>
using namespace std;

int main(void)
{
	int n;
    cin >> n;

    for(int i=0 ; i < n ; i++){
        int x;
        int y = 100;
        cin >> x;

        if(x >= 50 && x <= 70){
            y = x;
        }
        cout << y << endl;
    }
	
	return 0;
}
