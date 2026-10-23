// Accepted

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n, k, q;
        cin >> n >> k >> q;
        
        vector<long long> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        vector<long long> len;

        long long siz = 0;
        for(int i = 0; i < n; i++){
            if(v[i] <= q){
                siz++;
            }
            else{
                if(siz > 0 && siz >= k){
                    len.push_back(siz);
                }
                siz = 0;
            }
        }

        if(siz >= k){
            len.push_back(siz);
            siz = 0;
        }

        long long way = 0;
        for(long long x: len){
            way += (((x - k + 1) * (x - k + 2)) / 2);
        }


        cout << way << endl;
    }
}