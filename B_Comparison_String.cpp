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

        string s;
        cin >> s;

        vector<int> v;
        int i = 1;
        v.push_back(i);

        for(char c: s){
            if(c == '<'){
                i++;
                v.push_back(i);
            }
            else{
                i--;
                v.push_back(i);
            }
        }

        map<int, int> m;
        for(int x: v){
            m[x]++;
        }
        
        cout << m.size() << endl;
    }
}