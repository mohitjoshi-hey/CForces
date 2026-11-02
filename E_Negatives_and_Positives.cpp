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
        
        vector<long long> v(n);

        int negCou = 0;

        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] < 0){
                negCou++;
                v[i] = -v[i];
            }
        }

        long long sum = accumulate(v.begin(), v.end(), 0LL);

        if(negCou % 2 != 0){
            long long minE = *min_element(v.begin(), v.end());
            sum -= 2 * minE;
        }
        
        cout << sum << endl;
    }
}