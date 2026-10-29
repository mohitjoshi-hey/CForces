// Accepted

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        long long k;
        cin >> k;
        vector<long long> mons(n);

        for(int i = 0; i < n; i++){
            cin >> mons[i];

            long long a = mons[i]%k;
            if(a == 0){
                a = k;
            }

            mons[i] = a;
        }

        vector<pair<long long, int>> vp;
        for(int i = 0; i < n; i++){
            vp.push_back({mons[i], i});
        }

        sort(vp.begin(), vp.end());
        reverse(vp.begin(), vp.end());
        
        int ind = n;
        for(int i = 1; i < n; i++){
            if(vp[i].first == vp[i - 1].first){
                ind = min(ind, i - 1);
            }
            else{
                if(ind < n){
                    int j = i;
                    reverse(vp.begin() + ind, vp.begin() + j);
                }
                ind = n;
            }
        }

        if(ind < n){
            reverse(vp.begin() + ind, vp.end());
        }



        for(auto x: vp){
            cout << x.second + 1 << " ";
        }
        cout << endl;
    }
}