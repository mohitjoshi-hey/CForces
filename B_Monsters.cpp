// Accepted

#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<climits>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n, k;
        cin >> n >> k;
        bool found = false;
        int maxi = 0;

        vector<long long> v(n);
        for(int i = 0; i < n; i++){
            int l;
            cin >> l;
            v[i] = l % k;
            if(v[i] == 0){
                v[i] = k;
            }
        }


        vector<pair<int, int>> p;
        for(int i = 0; i < n; i++){
            p.push_back({v[i], i+1});
        }

        sort(p.begin(), p.end());
        reverse(p.begin(), p.end());

        for (int i = 0; i < n; ) {
            int j = i + 1;

            while (j < n && p[j].first == p[i].first) {
                j++;
            }

            reverse(p.begin() + i, p.begin() + j);

            i = j;
        }

        for(auto x: p){
            cout << x.second << " ";
        }

        cout << endl;
    }
}