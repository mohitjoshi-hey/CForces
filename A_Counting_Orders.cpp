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
        
        vector<long long> a(n);
        vector<long long> b(n);
        
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int j = 0;
        long long ways = 1;

        for(int i = 0; i < n; i++){
            while(j < n && b[j] < a[i]){
                j++;
            }

            ways = (ways *(j - i) % (1000000000+7));
            
        }

        cout << ways << endl;
    }
}