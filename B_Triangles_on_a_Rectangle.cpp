#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int w, h;
        cin >> w >> h;
        int a = 2, b = 2;

        vector<long long> area;
        while(a--){
            int k;
            cin >> k;
            vector<int> v(k);
            for(int i = 0; i < k; i++){
                cin >> v[i];
            }

            area.push_back(1LL*(v[k - 1] - v[0])* h);
        }

        while(b--){
            int k;
            cin >> k;
            vector<int> v(k);
            for(int i = 0; i < k; i++){
                cin >> v[i];
            }

            area.push_back(1LL*(v[k - 1] - v[0])* w);
        }

        long long maxArea = *max_element(area.begin(), area.end());

        cout << maxArea << endl;
    }
}