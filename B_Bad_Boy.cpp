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
        long long m, n, i, j;
        cin >> n >> m >> i >> j;

        long long a = 2*n + 2*m - 2*i - 3; // (n,1) -> (n,m)
        long long b = 2*i + 2*m - 4;       // (1,1) -> (1,m)
        long long c = 2*n + 2*m - 2*j - 3; // (1,m) -> (n,m)
        long long d = 2*n + 2*j - 4;       // (1,1) -> (n,1)
        long long e = 2*n + 2*m - 4;       // (1,1) -> (n,m)
        long long f = 2*n + 2*m - 4;       // (1,m) -> (n,1)

        long long k = max({a, b, c, d,e,f});
        long long u, v, w, x;
        
        if(k == a){
            u = n;
            v = 1;
            w = n;
            x = m;
        }
        else if(k == b){
            u = 1;
            v = 1;
            w = 1;
            x = m;
        }
        else if(k == c){
            u = 1;
            v = m;
            w = n;
            x = m;
        }
        else if(k == d){
            u = 1;
            v = 1;
            w = n;
            x = 1;
        }
        else if(k == e){
            u = 1;
            v = 1;
            w = n;
            x = m;
        }
        else{
            u = 1;
            v = m;
            w = n;
            x = 1;
        }


        cout << u << " " << v << " " << w << " " << x << endl;
    }
}