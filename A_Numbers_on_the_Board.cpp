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
        int l, r;
        cin >> l >> r;

        int a = abs(l);
        int b = abs(r);

        int rem;
        if(a == b){
            rem = 0;
        }
        else if(l < 0 && r > 0){
            rem = abs(b - a) -1;
        }
        else if((l < 0 && r < 0) || (l > 0 && r > 0)){
            rem = abs(b - a);
        }
        else{
            rem = abs(a - b) - 1;
        }
        // cout << maxCou << "\n";

        cout << rem << endl;
    }
}