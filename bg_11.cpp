#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
	double C,F;

    cin >> C;

    F = C*9/5 + 32;
	cout << fixed << setprecision(1);

    cout << F << "\n";
	
	return 0;
}
