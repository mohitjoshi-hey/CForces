#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <math.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n,k;
        cin >> n >> k;
        bool poss = true;

        vector<long long> v(n);
        for(long long i =0; i < n; i++){
            cin >> v[i];
            if(i >0){
                v[i] += v[i - 1];
            }
        }

        long long count = 0;
        for(int i = 0; i< n; i++){
            long long sum = v[i];
            if(i + 1 > k && sum % k == 0){
                count++;
            }
            for(int j = 0; j < i; j++){
                sum = v[i] - v[j];
                if(i - j > k){
                    if(sum % k == 0){
                        count++;
                    }
                }
                else{
                    break;
                }
            }
        }
        
        cout << count << endl;
    }
}