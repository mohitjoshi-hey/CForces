// Accepted

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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(i != 0){
                a[i] += a[i - 1];
            }
        }

        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        
        int scoreB = 0;
        long long final_score= 0;
        for(int i = 1; i <= n; i++){
            if(i <= k){
                long long sumA= a[i - 1];
                scoreB = max(scoreB, b[i - 1]);

                sumA += (k - i) * scoreB;
                final_score = max(final_score, sumA);
            }
            else{
                break;
            }
        }
        
        cout << final_score << endl;
    }
}