#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int m = n*(n - 1) / 2;
        vector<long long> v(m);

        for(int i = 0; i < m; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        vector<long long> ans;
        int i = 0;
        int j = 1;
        while(i < m){
            ans.push_back(v[i]);

            i +=  n- j;
            j++;
        }

        ans.push_back(v[m - 1]);

        for(int i = 0; i < n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}