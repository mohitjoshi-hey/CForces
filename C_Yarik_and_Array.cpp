// Accepted -> I used Kadane Algo here...

#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<climits>
using namespace std;

int main(){
    
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long> v(n);

        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        
        bool ev = true;
        if(v[0] % 2 != 0){
            ev = false;
        }

        int sum = v[0];
        int maxS = INT_MIN;
        for(int i = 1; i < n; i++){
            int k = v[i];
            if(ev){
                if(k % 2 != 0){
                    ev = false;
                    maxS = max(maxS, sum);
                    sum = max(k, sum+k);
                }
                else{
                    maxS = max({maxS, sum});
                    sum = k;

                    if(k % 2 == 0){
                        ev = true;
                    }
                    else{
                        ev = false;
                    }
                }
            }
            else{
                if(k % 2 == 0){
                    ev = true;
                    maxS = max(maxS, sum);
                    sum = max(k, sum+k);
                }
                else{
                    maxS = max({maxS, sum});
                    sum = k;
                    if(k % 2 == 0){
                        ev = true;
                    }
                    else{
                        ev = false;
                    }
                }
            }

        }

        maxS = max(maxS, sum);

        cout << maxS << endl;
    }
}