#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n, k;
        cin >> n >> k;

        vector<char> s(n);
        for(int i = 0; i < n; i++){
            cin >> s[i];
        }
        int cou = 0;

        vector<int> v;

        for(char x: s){
            if(x == 'W'){
                cou++;
                v.push_back(cou);
            }
            else{
                v.push_back(-1 * cou);
            }
        }

        int minS = INT_MAX;

        for(int i = 0; i <= n - k; i++){
            int a = v[i];
            int b = v[k + i - 1];

            int count;
            if(a > 0 && b > 0 || b < 0 && a > 0){
                count = abs(b) - abs(a) + 1;
            }
            else{
                count = abs(b) - abs(a);
            }

            minS = min(minS, count);
        }

        cout << minS << "\n";
    }
}