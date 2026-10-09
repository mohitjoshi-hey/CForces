#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector <string> arithmetics(t);

    while(t--){
        string s;
        cin >> s;
        arithmetics.push_back(s);
    }
    
    int X = 0;
    for(string s: arithmetics){
        if(s[0] == '+' || s[s.size() - 1] == '+'){
            X++;
        }
        else if(s[0] == '-' || s[s.size() - 1] == '-'){
            X--;
        }
    }

    cout << X;
}