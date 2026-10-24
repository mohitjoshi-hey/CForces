// Accepted

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <math.h>
#include <string>
#include <numeric>
#include <climits>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int d = n;

        vector<long long> mins;
        vector<long long> mins2;

        while(n--){
            int k;
            cin >> k;

            vector<long long> v(k);
            for(int i = 0; i < k; i++){
                cin >> v[i];
            }

            long long minE = *min_element(v.begin(), v.end());
            int minInd;

            for(int i = 0; i < k; i++){
                if(v[i] == minE){
                    minInd = i;
                    break;
                }
            }

            long long minE2 = LLONG_MAX;

            for(int i = 0; i < k; i++){
                if(i != minInd && v[i] < minE2){
                    minE2 = v[i];
                }
            }

            mins.push_back(minE);
            mins2.push_back(minE2);
        }

        long long j = *min_element(mins.begin(), mins.end());

        long long sum = accumulate(mins2.begin(), mins2.end(), 0LL);

        long long max_sum = 0;
        long long sum2 = sum;

        for(int i = 0; i < d; i++){
            sum -= mins2[i];
            sum += j;

            max_sum = max(max_sum, sum);
            sum = sum2;
        }

        cout << max_sum << endl;
    }
}