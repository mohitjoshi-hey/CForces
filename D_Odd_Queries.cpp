#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, q;
        cin >> n >> q;

        vector <int> v(n);

        for(int i = 0; i < n; i++){
            if(i == 0){
                cin >> v[i];
            }
            else{
                int k;
                cin >> k;
                v[i] = k + v[i - 1];
            }
        }

        int sum = v[n - 1];
        while(q--){
            int d = sum;
            int l, r, k;
            cin >> l >> r >> k;

            d -= (l > 1 ? v[r - 1] - v[l - 2] : v[r - 1]);
            d += (r - l + 1)*k;

            if(d % 2 != 0){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
}