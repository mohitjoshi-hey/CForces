#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <unordered_map>
#include <math.h>
#include <set>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        bool poss = false;
        long long n, k, x;
        cin >> n >> k >> x;
        long long sum1  = (n*(n + 1) - (n-k)*(n - k+1)) / 2;
        long long sum2 = k*(k + 1) / 2;

        if(x >= sum2 && x <= sum1){
            poss = true;
        }
        else{
            poss = false;
        }


        cout << (poss ? "YES" : "NO") << endl;
    }
}