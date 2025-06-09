#include <iostream>
using namespace std;

int main(void)
{
	int n;

    cin >> n;

    if(n == 1 || n == 2){
        cout << "YES" << endl;
    }else if(n % 2 == 0 || n <= 0){
        cout << "NO" << endl;
    }
	
    for(int i = 3 ; i <= n/2 ; i+=2){
        if(n % i == 0){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
	
	return 0;
}
