#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        bool f = false;
        vector <int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        int maxE = *max_element(v.begin(), v.end());
        int minE = *min_element(v.begin(), v.end());
        for(int i = 1; i < n; i++){
            if(v[i - 1] == maxE && v[i] == minE){
                f = true;
            }
        }

        int d1 = v[n - 1] - minE;
        int d2 = maxE - v[0];

        cout << (f ? maxE - minE : (d1 > d2 ? d1 : d2)) << endl;
    }
}