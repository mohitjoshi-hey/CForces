#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<pair<int, int>> v(n);

        for(int i = 0; i < n; i++){
            cin >> v[i].first;
            v[i].second = i + 1;
        }

        sort(v.begin(), v.end());

        if(v[0].first == v[n - 1].first){
            cout << "NO" << endl;
        }
        else{
            int i = 1;

            for(int k = 1; k < n; k++){
                if(v[k].first == v[0].first){
                    i++;
                }
                else{
                    break;
                }
            }

            cout << "YES" << endl;

            for(int k = i; k < n - 1; k++){
                cout << v[0].second << " " << v[k].second << "\n";
            }
            for(int k = 1; k < i; k++){
                cout << v[n - 1].second << " " << v[k].second << "\n";
            }
            cout << v[0].second << " " << v[n - 1].second << endl;
        }
    }
}