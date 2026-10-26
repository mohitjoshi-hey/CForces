#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;

void inputSubstring(string s, unordered_map<string, int> &m)
{
    for (int i = 0; i < s.size(); i++){
        for (int j = i; j < s.size(); j++){
            string d = s.substr(i, j - i + 1);
            m[d] = d.size();
        }
    }
}

int main(){
    int t;
    cin >> t;

    while (t--){
        string a, b;
        cin >> a >> b;
        unordered_map<string, int> m1;
        unordered_map<string, int> m2;

        inputSubstring(a, m1);
        inputSubstring(b, m2);

        string subs;
        int len = 0;

        for(auto it1: m1){
            int siz;
            auto it2 = m2.find(it1.first);
            if(it2 != m2.end()){
                siz = it2->second;
                if(siz > len){
                    len = siz;
                    subs = it2->first;
                }
            }
        }

        int steps = a.size() + b.size();
        if(len > 0){
            steps -= 2 * len;
        }

        cout << steps << endl;
    }
}