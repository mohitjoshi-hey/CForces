#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        vector<int> v;
        int count = 0;
        int fill = 0;

        for(int i = 0; i < n; i++){
            char c = s[i];
            if(c == '.'){
                if(i < n - 1 && c != s[i + 1]){
                    count++;
                    v.push_back(count);
                    count = 0;
                }
                else{
                    count++;
                }
            }
        }
        v.push_back(count);

        for(int i: v){
            if(i < 2){
                fill += i;
            }
            else{
                fill += 2;
            }
        }

        cout << fill << "\n";
    }

    return 0;
}