#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;
        bool found = false;
        int maxi = 0;

        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
            int j = v[i] % k;
            if(j==0){
                found = true;
            }
            else{
                maxi = max(maxi, j);
            }
        }

        cout << (found ? 0 : k - maxi) << endl;
    }
}