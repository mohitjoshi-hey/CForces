// Accepted

#include<iostream>
#include<vector>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<numeric>
#include<climits>
using namespace std;

int main(){
    
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;
        string num, den;
        cin >> num >> den;

        map<char, int> m1;

        for(char x: num){
            m1[x]++;
        }
        for(char x: den){
            if(m1.find(x) != m1.end()){
                int k = m1[x];
                k--;
                m1[x] = k;
            }
            else{
                m1[x] = -1;
            }
        }

        bool poss = true;
        bool s = false;
        bool i = false;
        bool x = false;
        for(auto it: m1){ // I emsured here that does any character apart from 's, 'i' & 'x' exists here or not. But I didn't ensured here that does 's, 'i' & 'x' exists here or not.
            if(it.first == 's' || it.first == 'i' || it.first == 'x'){
                if(it.first == 's'){
                    s = true;
                }
                else if(it.first == 'i'){
                    i = true;
                }
                else if(it.first == 'x'){
                    x = true;
                }

                if(it.second != 1){
                    poss = false;
                }
            }
            else{
                if(it.second != 0){
                    poss = false;
                }
            }
        }

        // if(m1['s'] == 0 || m1['i'] == 0 || m1['x'] == 0){
        //     poss = false;
        // }

        cout << (poss && s && i && x ? "YES" : "NO") << endl;
    }
}