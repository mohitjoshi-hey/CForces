#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <unordered_map>
#include <math.h>
#include <stack>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n; 
        cin >> n;
        vector<int> v(n);
        int c1 = 0, c0 = 0;

        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] == 1){
                c1++;
            }
            else if(v[i] == 0){
                c0++;
            }
        }

        long long ans = c1 * 1ll*pow(2, c0);
        
        cout << ans << endl;
    }
}