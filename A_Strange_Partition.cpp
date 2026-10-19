#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n, x;
        cin >> n >> x;
        vector<long long> v(n);

        long long sum = 0;
        long long j = 0;
        for(long long i = 0; i < n; i++){
            cin >> v[i];
            sum += v[i];
            j += (v[i] + x - 1) / x;
        }

        sum = (sum + x - 1) / x;
        cout << sum << " " << j << endl;

        // cout << t << endl;
    }
}