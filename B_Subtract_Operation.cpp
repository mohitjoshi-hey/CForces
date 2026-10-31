// Accepted

#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<numeric>
#include<climits>
using namespace std;

int main(){
    
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        long long k;
        cin >> k;

        vector<long long> v(n);

        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        
        // unordered_map<long long, int> m;

        // for(long long x: v){
        //     m[x]++;
        // }

        // bool found = false;

        // for(auto it: m){
        //     long long a = it.first;
        //     long long b = k + a;
        //     long long c = a - k;

        //     if(k == 0){
        //         if(it.second > 1){
        //             found = true;
        //             break;
        //         }
        //     }
        //     else if(m.find(b) != m.end() || m.find(c) != m.end()){
        //         found = true;
        //         break;
        //     }
        // }

        sort(v.begin(), v.end());

        int i = 0, j = 1;
        bool poss = false;

        while(i < n && j < n){
            long long a = v[i];
            long long b = v[j];

            if(b - a == k){
                poss = true;
                break;
            }
            else if(b - a > k){
                i++;
            }
            else{
                j++;
            }
        }

        cout << (poss ? "YES" : "NO") << endl;
    }
}