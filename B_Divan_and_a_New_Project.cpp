// Accepted

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <utility>
#include <climits>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        vector<int> p = v;
        sort(p.begin(), p.end());

        vector<pair<int, int>> vv(n);

        int j = 1;
        for(int i = 0; i < n; i++){
            vv[i].first = p[n - 1 - i];
            vv[i].second = j;
            if(j < 0){
                j = -j;
                j++;
            }
            else{
                j = -j;
            }
        }

        set<pair<int, int>> s(vv.begin(), vv.end());



        vector<int> v2(n + 1);
        v2[0] = 0;

        for(int i = 1; i < n + 1; i++){
            auto it = s.lower_bound({v[i - 1], INT_MIN});
            int d;

            if(it != s.end()){
                d = it->second;
                s.erase(it);
            }

            v2[i] = d;
        }

        long long sum = 0;
        for(int i = 1; i < n + 1; i++){
            sum += 2LL * abs(v2[i]) * v[i - 1];
        }

        cout << sum << endl;
        for(int i = 0; i < n + 1; i++){
            cout << v2[i] << " ";
        }

        cout << endl;
    }
}