#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int count = 0;
        int ans = 0;
        for(char x: s){
            if(x == '('){
                count++;
            }
            else{
                count--;
            }

            if(count < 0){
                ans++;
                count = 0;
            }
        }

        cout << ans << endl;
    }
    
}