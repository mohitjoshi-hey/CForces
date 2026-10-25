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

        long long stickCount = k + k * y;

        long long l = (stickCount + x - 2) / (x - 1);

        ans += ((stickCount + x - 2) % (x - 1) == 0 ? l - 1 : l);
        // while(co < k + k*y){
        //     co--;
        //     co += x;
        //     ans++;
        // }

        ans += k;

        cout << ans << endl;
    }
}