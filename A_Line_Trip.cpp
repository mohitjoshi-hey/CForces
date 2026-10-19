#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, x;
        cin >> n >> x;

        vector<int> A;

        A.push_back(0);
        for(int i = 0; i < n; i++){
            int point;
            cin >> point;
            A.push_back(point);
        }

        A.push_back(x);
        int max_diff = 0;

        for(int i = 1; i <= n + 1; i++){
            if(i == n + 1){
                max_diff = max(max_diff, 2 * (A[i] - A[i - 1]));
            }
            else{
                max_diff = max(max_diff, A[i] - A[i - 1]);
            }
        }

        cout << max_diff << "\n";
    }
}