#include <iostream>
using namespace std;

int main(void)
{
	int arr[9];
    for(int i = 0 ; i < 9 ; i++){
        cin >> arr[i];
    }

    for(int i = 0 ; i < 9 ; i += 3){
        bool check = true;
        for(int j = i+1 ; j < (i+3) ; j++){
            if(arr[j] != arr[i]){
                check = false;
            }
        }
        if(check == true){
            cout << "True" << endl;
            return 0;
        }
    }

    for(int i = 0 ; i < 3 ; i ++){
        bool check = true;
        for(int j = i+3 ; j < 9 ; j+=3){
            if(arr[j] != arr[i]){
                check = false;
            }
        }
        if(check == true){
            cout << "True" << endl;
            return 0;
        }
    }
    
    bool temp = true;
    for(int i = 4 ; i < 9 ; i += 4){
        if(arr[0] != arr[i]){
            temp = false;
        }
    }
    if(temp == true){
        cout << "True" << endl;
        return 0;
    }

    bool temp_2 = true;
    for(int i = 4 ; i <= 7 ; i+=2){
        if(arr[2] != arr[i]){
            temp_2 = false;
        }
    }
    if(temp_2 == true){
        cout << "True" << endl;
        return 0;
    }
    cout << "False" << endl;
	return 0;
}
