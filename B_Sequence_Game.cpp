#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector <int> v(n);
        vector <int> ans;

        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        for(int i = 0; i < n; i++){
            if(i > 0 && v[i] < v[i - 1]){
                ans.push_back(v[i]);
                ans.push_back(v[i]);
            }
            else{
                ans.push_back(v[i]);
            }
        }

        cout << ans.size() << "\n";
        for(int x: ans){
            cout << x << " ";
        }

        cout << "\n";
    }

    return 0;
}