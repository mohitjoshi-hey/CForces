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

        vector<int> A(n);

        for(int i = 0; i < n; i++){
            cin >> A[i];
        }

        vector<int> B = A;
        sort(B.begin(), B.end());

        if(k > 1){
            cout << "YES\n";
        }
        else{
            if(B == A){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
}