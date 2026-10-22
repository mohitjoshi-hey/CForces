#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n, k, b, s;
        cin >> n >> k >> b >> s;
        bool poss = true;

        vector<long long> v(n, 0);
        v[n - 1] = s;

        if(b > v[n - 1]/k){
            cout << -1 << endl;
        }
        else{
            int i = n - 2;
            while(v[n - 1] / k != b){
                if(i < 0){
                    poss = false;
                    break;
                }
                v[n - 1] -= k - 1;
                v[i] = k - 1;
                i--;
            }

            if(poss){
                for(int i = 0; i < n; i++){
                    cout << v[i] << " ";
                }   
            }
            else{
                cout << -1;
            }

            cout << endl;
        }

        
    }
}