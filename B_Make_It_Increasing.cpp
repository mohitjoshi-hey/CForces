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
        int n;
        cin >> n;
        bool poss = true;

        vector<long long> v(n);
        for(int i =0; i < n; i++){
            cin >> v[i];
            if(v[i] < i){
                poss = false;
            }
        }
        
        long long count = 0;
        if(poss){
            for(int i = n-2; i >= 0; i--){
                if(v[i+1] == 0){
                    poss = false;
                    break;
                }
                while(v[i] >= v[i+1]){
                    v[i] /= 2;
                    count++;
                }
            }
        }

        cout << (poss ? count : -1) << endl;
    }
}