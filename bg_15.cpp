#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
	int n;
    cin >> n;

    double d;
    if(n/1500){
        d = n * 0.9 * 0.79;
    }else if(n/800){
        d = n * 0.9 * 0.9;
    }else{
        d = n * 0.9;
    }

    cout << fixed << setprecision(1);

    cout << d << "\n";
	
	return 0;
}
