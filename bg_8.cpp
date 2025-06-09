#include <iostream>
using namespace std;

int main(void)
{
	int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        cout << x << " "<< x*x << " " << x*x*x << endl;
    }

	return 0;
}
