#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        if(n <= 3){
            cout << -1 << endl;
        }
        else{
            vector<int> ans;
            for(int i = 1; i <= n; i++){
                ans.push_back(i);
            }
            ans[0] = 4;
            ans[3] = 1;

            for(int x: ans){
                cout << x << " ";
            }

            cout << endl;
        }
    }
}