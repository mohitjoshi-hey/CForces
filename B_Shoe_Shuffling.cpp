#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        map<int, int> m;

        for(int i = 0; i < n; i++){
            int d;
            cin >> d;
            m[d]++;
        }

        bool poss = true;

        for(auto it: m){
            if(it.second == 1){
                poss = false;
            }
        }

        if(poss){
            vector<int> ans;
            int freq = 0;
            for(auto it: m){
                ans.push_back(freq + it.second);

                for(int j = 1; j <= it.second - 1; j++){
                    ans.push_back(j + freq);
                }

                freq += it.second;
            }

            for(int x: ans){
                cout << x << " ";
            }
        }
        else{
            cout << -1;
        }

        cout << endl;
    }
}