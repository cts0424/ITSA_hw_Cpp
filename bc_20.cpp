#include <iostream>
#include <vector>
#include <string>

using namespace std;



int main(void)
{
	int numbers;
	cin >> numbers;
	cin.ignore();

	for(int i = 0 ; i < numbers ; i++){
		vector<int> input;
		string num1,num2;
		cin >> num1 >> num2;

		int length_1 = num1.length(),length_2 = num2.length();
		int min = (length_1 > length_2) ? length_2 : length_1;
		
		string ans = "";
		int carry = 0;
		for(int j = 0 ; j < min ; j++){
			int temp1 = num1[length_1-1-j] - '0',temp2 = num2[length_2-1-j] - '0';
			int res = temp1 + temp2 + carry;
			carry = 0;
			if(res >= 10){
				res -= 10;
				carry = 1;
			}
			char char_res = res + '0';
			ans = char_res + ans;
		}

		int sub;
		string left;
		if(length_2 > length_1){
			sub = length_2 - length_1 - 1;
			left = num2;
		}else{
			sub = length_1 - length_2 - 1;	
			left = num1;
		}

		for(int k = sub ; k >= 0 ; k--){
			int temp1 = left[k] - '0';
			int res = temp1 + carry;
			carry = 0;
			if(res >= 10){
				res -= 10;
				carry = 1;
			}
			char char_res = res + '0';
			ans = char_res + ans;
				
		}
		if(carry == 1){
			ans = '1' + ans;
		}

		cout << ans << "\n";

	}
	
	
	return 0;
}
