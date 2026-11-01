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

        vector<long long> cost(n);

        for(int i = 0; i < n; i++){
            long long q;
            cin >> q;
            cost[i] = q + i - 0 + 1;
        }

        sort(cost.begin(), cost.end());

        int count = 0;

        for(long long x: cost){
            k -= x;

            if(k >= 0){
                count++;
            }
            else{
                break;
            }
        }

        cout << count << endl;
    }
}