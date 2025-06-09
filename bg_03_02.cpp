#include <iostream>
#include <cctype>

using namespace std;

int main(void)
{
	char c;
    cin >> c;

    c = tolower(c);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        cout << "母音" << endl;
    }else{
        cout << "子音"  << endl;
    }
	
	
	return 0;
}
