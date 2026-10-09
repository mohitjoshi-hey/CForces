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
        long long a, b;
        cin >> a >> b;

        long long k = abs(a - b);

        if(k == 0){
            cout << 0 << " " << 0 << endl;
        }
        else if(a == 0 || b == 0){
            cout << abs(a - b) << " " << 0 << endl;
        }
        else{
            long long c = a / k;

            cout << k << " " << (abs(c * k - a) > abs((c + 1) * k - a) ? abs((c + 1) * k - a) : abs(c * k - a)) << endl;
        }

        // cout << diff + 1 << endl;
    }
}