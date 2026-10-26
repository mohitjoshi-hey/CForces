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

        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        int a = *max_element(v.begin(), v.begin() + n - k + 1);
        int b = (*min_element(v.begin() + n - k + 1, v.end()));

        int l = -1;
        int m = -1;

        for(int i = 0; i < n; i++){
            if(v[i] == a){
                l = i;
            }
            else if(v[i] == b){
                m = i;
            }
        }

        string ans;

        if(k == 1){
            ans = "-1";
        }
        else if((l != -1 && m != -1) && a > b){
            ans = to_string(l + 1) + " " + to_string(m + 1);
        }
        else{
            ans = "-1";
        }

        cout << ans << endl;

        // cout << minS << "\n";
    }
}