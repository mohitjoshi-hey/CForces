#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        bool poss = false;
        int n;
        cin >> n;

        map<int, int> m;
        for(int i = 0; i < n; i++){
            int t;
            cin >> t;
            m[t]++;
        }
        
        if(m.size() == 1){
            poss = true;
        }
        else if(m.size() == 2){
            int k;
            int l;
            int j = 0;
            for(auto it: m){
                if(j == 0){
                    k = it.second;
                    j++;
                }
                else{
                    l = it.second;
                }
            }
            if(k == l || abs(k - l) == 1){
                poss = true;
            }
        }

        cout << (poss ? "Yes" : "No") << "\n";
    }

    return 0;
}