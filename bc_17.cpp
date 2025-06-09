#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cctype>

using namespace std;

int main(void)
{
	string input,word;
    getline(cin,input);
    vector<string> tokens;

    stringstream ss(input);

    while(ss >> word){
        bool check = true;
        for(char& c : word){
            c = tolower(c);
        }   
        for(const string& t : tokens){
            if(t == word){
                check = false;
                break;
            }
        }
        if(!check){
            continue;
        }

        tokens.push_back(word);
    }

    for(int i = 0 ; i < tokens.size() ; i++){
        cout << tokens[i];
        if(i != tokens.size()-1){
            cout << " ";
        }else{
            cout << endl;
        }
    }
	
	return 0;
}
