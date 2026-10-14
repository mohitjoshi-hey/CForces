#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <math.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int c0 = 0, c1 = 0;

    for(char c: s){
        if(c == '1'){
            c1++;
            c0 = 0;
        }
        else{
            c0++;
            c1=0;
        }
        if(c0 > 6 || c1 > 6){
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";
}