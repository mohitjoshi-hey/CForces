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
        long long a, b, xk, yk, xq, yq; 
        cin >> a >> b;
        cin >> xk >> yk;
        cin >> xq >> yq;

        set<pair<long long, long long>> v1 = {{xk+a, yk+b}, {xk+a, yk-b}, {xk-a, yk+b}, {xk-a, yk-b}, {xk+b, yk+a}, {xk+b, yk-a}, {xk-b, yk+a}, {xk-b, yk-a}};

        set<pair<long long, long long>> v2 = {{xq+a, yq+b}, {xq+a, yq-b}, {xq-a, yq+b}, {xq-a, yq-b}, {xq+b, yq+a}, {xq+b, yq-a}, {xq-b, yq+a}, {xq-b, yq-a}};
        
        long long count = 0;

        for(auto x: v1){
            if(v2.find(x) != v2.end()){
                count++;
            }
        }

        cout << count << endl;
    }
}