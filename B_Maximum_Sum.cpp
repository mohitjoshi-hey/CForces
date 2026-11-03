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

        vector<long long> v(n);

        for(int i = 0; i < n;i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        vector<long long> sum;
        int i = 0;
        while(i < n - 1){
            sum.push_back(v[i] + v[i + 1]);
            i += 2;
        }

        int a = min((int)sum.size(), k);
        int avialInd = n - 2 * a;
        int b = k - a;

        while(avialInd < b){
            a--;
            avialInd += 2;
            b = k - a;
        }

        for(int i = 0; i < sum.size(); i++){
            if(i != 0){
                sum[i] += sum[i - 1];
            }
        }

        reverse(v.begin(), v.end());

        for(int i = 0; i < v.size(); i++){
            if(i != 0){
                v[i] += v[i - 1];
            }
        }

        a--;
        b--;


        long long min_val = LLONG_MAX;
        long long val;
        while(a >= -1 && b >= -1){
            val = (a > -1 ? sum[a] : 0LL) + (b > -1 ? v[b] : 0LL);
            a--;
            b++;
            min_val = min(min_val, val);
        }


        cout << v[n - 1] - min_val << "\n";
    }
}