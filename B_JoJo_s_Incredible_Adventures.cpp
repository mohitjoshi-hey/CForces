// Accepted

#include<iostream>
#include<numeric>
#include<vector>
#include<algorithm>
#include<climits>
#include<map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int n = s.size();

        int len = 0;
        int max_len = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                len++;
            }
            else{
                max_len = max(max_len, len);
                len = 0;
            }
        }

        max_len = max(max_len, len);
        int a = 0, b = n - 1;
        long long max_area = 0;

        if(max_len != n){
            while(a < b){
                if(s[a] == '1'){
                    a++;
                }
                else if(s[b] == '1'){
                    b--;
                }
                else{
                    break;
                }
            }

            max_len = max(max_len, n - (b - a + 1));

            max_len = max(max_len, len);
            long long area;
            for(int i = 0; i <= max_len; i++){
                area = (1LL + i) * (max_len - i);
                max_area = max(max_area, area);
            }
        }
        else{
            max_area = 1LL * n * n;
        }

        cout << max_area << "\n";
    }
}