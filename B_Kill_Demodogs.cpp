// Accepted

#include<iostream>
#include<numeric>
#include<vector>
#include<algorithm>
#include<climits>
#include<map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        __int128 m = n;
        __int128 ans = ((m*(m + 1)*(2*m + 1)) / 6) + ((m*(m - 1) * (2*m - 1)) / 6) + ((m*(m - 1)) / 2);

        long long num = 1000000007;

        ans = (2022 * ans) % num;

        long long sol = ans;

        cout << sol << "\n";
    }
}