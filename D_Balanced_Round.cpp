#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        vector <int> v(n);

        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        int co = 0, maxC = 0;

        for(int i = 1; i < n; i++){
            int d = v[i] - v[i - 1];
            if(d <= k){
                co++;
            }
            else{
                maxC = max(maxC, co);
                co = 0;
            }
        }
        maxC = max(maxC, co);
        maxC++;

        cout << n - maxC << endl;
    }
}