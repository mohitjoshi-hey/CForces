#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector <int> v(n);

        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        map<int, int> m;
        for(int x: v){
            m[x]++;
        }
        
        int num, freq = 0;
        for(auto it: m){
            if(it.second > freq){
                freq = it.second;
                num = it.first;
            }
        }

        int steps = 0;
        while(freq < n){
            steps++;
            if(2 * freq <= n){
                steps += freq;
                freq += freq;
            }
            else{
                steps += n - freq;
                freq = n;
            }
        }

        cout << steps << endl;
    }
}