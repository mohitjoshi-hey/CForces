#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <math.h>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long x,y, k;
        cin >> x >> y >> k;
        long long co = 1;
        long long ans = 0;

        while(co < k + k*y){
            co = co*x;
            ans++;
        }

        ans += k;

        cout << ans << endl;
    }
}