#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <math.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        bool poss = true;

        int count = 1;
        int ans = 1;

        bool big = false;
        bool small = false;

        for (int i = 1; i < (int)s.size() - 1; i++) {
            if(s[i] == s[i+1] && s[i] == s[i- 1]){
                big = true;
            }
            if(s[i] != s[i+1] && s[i] != s[i- 1]){
                small = true;
            }
        }

        cout << ans + (big? 1:0) + (small? 1:0) << endl;
        

    }
}