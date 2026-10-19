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
        long long n;
        cin >> n;
        set<long long> v;

        long long d  = (sqrt(n)) + 1;
        
        for(long long i = 1; i <= d; i++){
            if(n % i == 0){
                int j = n / i;
                v.insert(i);
                v.insert(j);
            }
        }

        vector<long long> s;
        for(auto i: v){
            s.push_back(i);
        }

        long long size = 1;
        long long msize = 0;
        for(int i = 1; i < s.size(); i++){
            if(s[i] == s[i - 1] + 1){
                size++;
                msize = max(msize, size);
            }
            else{
                
                size = 0;
            }
        }

        cout << msize << endl;
    }
}