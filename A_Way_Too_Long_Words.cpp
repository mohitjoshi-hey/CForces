#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    string s;
    vector <string> m;
    while(t--){
        cin >> s;
        m.push_back(s);
    }

    for(string &d: m){
        if(d.size() > 10){
            int l = d.size() - 2;
            string news = d[0] + to_string(l) + d[l + 1];
            d = news;
        }
    }

    for(string d: m){
        cout << d << "\n";
    }

}