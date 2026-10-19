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
        int ch, sau;
        cin >> ch >> sau;
        bool poss = true;
        int ans;
        
        if(sau >= ch){
            poss = false;
        }
        else if(sau < ch && ch < 2*sau){
            ans = ch - sau;
        }
        else if(sau < ch && ch >= 2*sau) {
            ans = sau;
        }

        cout << (poss ? ans : -1) << endl;
    }
}