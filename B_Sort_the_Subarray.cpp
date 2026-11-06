// Accepted

#include<iostream>
#include<numeric>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        vector<int> b(n);
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        vector<int> ad(n);
        for(int i = 0; i < n; i++){
            ad[i] = b[i] - a[i];
        }

        int st = 0, end = n - 1;
        while(st < end){
            if(ad[st] == 0){
                st++;
            }
            else if(ad[end] == 0){
                end--;
            }
            else{
                break;
            }
        }

        while(st > 0){
            if(b[st - 1] <= b[st]){
                st--;
            }
            else{
                break;
            }
        }
        while(end < n - 1){
            if(b[end + 1] >= b[end]){
                end++;
            }
            else{
                break;
            }
        }

        cout << st + 1 << " " << end + 1 << endl;
    }
}