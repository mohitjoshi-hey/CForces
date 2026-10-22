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
        int n, k;
        cin >> n >> k;

        int s = n * k;
        vector<long long> v(s);
        for(int i = 0; i < s; i++){
            cin >> v[i];
        }

        int med = (n + 1) / 2;
        int a = med - 1;
        int b = n - med + 1;
        long long sum = 0;

        int i = -1, j = s;
        while(i < j){
            i += a;
            j -= b;
            if(i < j){
                sum += v[j];
            }
        }

        cout << sum << endl;
    }
}