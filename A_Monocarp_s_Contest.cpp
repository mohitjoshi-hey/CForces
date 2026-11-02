// Accepted

#include<iostream>
#include<vector>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<numeric>
#include<climits>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int co0 = 0;

        bool is1 = false;
        bool isn = false;
        
        vector<long long> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] == 0){
                co0++;
            }
        }

        if(v[0] == 0){
            is1 = true;
        }
        if(v[n-1] == 0){
            isn = true;
        }

        bool poss = false;
        int ans;
        if(co0 >= 2){
            poss = true;
            ans = 2 - (is1 ? 1 : 0) - (isn ? 1 : 0);
        }
        
        cout << (poss ? ans : -1) << endl;
    }
}