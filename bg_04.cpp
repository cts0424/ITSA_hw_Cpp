#include <iostream>
using namespace std;

int main(void)
{
	int n;
    cin >> n;

    for(int i=0 ; i < n ; i++){
        int result,temp;
        cin >> result >> temp;

        result += temp;
        cout << result << endl;
    }
	
	return 0;
}
