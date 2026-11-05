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
        int n;
        cin >> n;
        vector<long long> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        long long diff = *max_element(v.begin(), v.end()) - *min_element(v.begin(), v.end());

        for(int i = 0; i < n; i++){
            if(i != 0){
                v[i] += v[i - 1];
            }
        }
        vector<long long> sum;

        for(int i = 2; i <= n/2; i++){
            int ind = i - 1;
            int k = 1;
            int l;
            if(n % i == 0){
                while(ind < n){
                    if(k == 1){
                        sum.push_back(v[ind]);
                        k++;
                    }
                    else{
                        sum.push_back(v[ind] - v[l]);
                    }
                    l = ind;
                    ind += i;
                }

                long long maxE = *max_element(sum.begin(), sum.end());
                long long minE = *min_element(sum.begin(), sum.end());

                diff = max(diff, maxE - minE);

                sum.clear();
            }
        }
        
        cout << diff << endl;
    }
}