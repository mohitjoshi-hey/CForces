#include<iostream>
#include<numeric>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        
        sort(v.begin(), v.end());

        int max_l = 0;
        for(int x: v){
            int len = 0;
            for(int y: v){
                if(y % x == 0){
                    len++;
                }
            }

            max_l = max(max_l, len);
        }

        cout << n - max_l << endl;
    }
}