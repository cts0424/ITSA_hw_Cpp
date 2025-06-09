#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
	int x;
    double km;

    cin >> x;
	
    km = x * 1.6;
    cout << fixed << setprecision(1);

    cout << "km=" << km << "\n";
	
	return 0;
}
