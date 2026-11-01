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
    
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        vector<int> v(n);
        map<int, int> m;

        for(int i = 0; i < n; i++){
            cin >> v[i];
            m[v[i]]++;
        }

        long long sum = accumulate(v.begin(), v.end(), 0);
        long long ans;

        if(m[1] == n){
            sum = -1;
        }
        else if(m[1] == n - 1 && (v[0] != 1 || v[n - 1] != 1)){
            sum -= n - 1;
        }
        else if(m[1] == n - 2 && (v[0] != 1 && v[n - 1] != 1)){
            sum -= n - 1;
        }
        else{
            sum--;
        }

        cout << sum << endl;
    }
}