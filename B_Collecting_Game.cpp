// Accepted

#include<iostream>
#include<numeric>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        vector<pair<long long, int>> vp(n);
        for(int i = 0; i < n; i++){
            vp[i] = {a[i], i};
        }

        sort(vp.begin(), vp.end());
        sort(a.begin(), a.end());

        for(int i = 1; i < n; i++){
            vp[i].first += vp[i - 1].first;
        }
        
        vector<int> ans(n);
        ans[vp[n - 1].second] = n - 1;

        for(int i = n - 2; i >= 0; i--){
            if(vp[i].first >= a[i + 1]){
                ans[vp[i].second] = ans[vp[i + 1].second];
            }
            else{
                ans[vp[i].second] = i;
            }
        }

        for(int x: ans){
            cout << x << " ";
        }
        
        cout << endl;
    }
}