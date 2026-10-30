// Accepted

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        long long k;
        cin >> n;
        cin >> k;

        vector<long long> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        int cou = 0;
        int maxCou = 0;

        for(int i = 1; i < n; i++){
            int diff = v[i] - v[i - 1];
            if(diff <= k){
                cou++;
            }
            else{
                maxCou = max(maxCou, cou);
                cou = 0;
            }
        }

        maxCou = max(maxCou, cou);

        cout << n - maxCou -1 << endl;
    }
}