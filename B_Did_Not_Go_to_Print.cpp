#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <unordered_map>
#include <math.h>
#include <stack>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        unordered_map<int, int> m;
        vector<int> v;
        stack<int> st;

        for(int i = 0; i <n; i++){
            if(s[i] == '1'){
                st.push(i + 1);
            }
            else if(!st.empty() && s[i] == '2'){
                int k = st.top();
                m[k]++;
                st.pop();
            }
            else{
                m[i + 1]++;
            }
        }

        int size = n - m.size();


        for(int i = 1; i <= n; i++){
            if(m.find(i) != m.end()){

            }
            else{
                v.push_back(i);
            }
        }

        sort(v.begin(), v.end());

        cout << size << endl;
        for(int x: v){
            cout << x << " ";
        }
        cout << endl;

        

        // cout << diff + 1 << endl;
    }
}