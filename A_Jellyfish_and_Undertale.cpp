#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long a, b, n;
        cin >> a >> b >> n;

        vector <int> v(n);

        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        long long t = 0;
        int i = 0;

        while(b != 0){
            if(i < v.size() && b == 1){
                b = min(b + v[i], a);
                i++;
            }
            else if(i >= v.size()){
                t += b;
                b = 0;
                
            }
            else{
                t += b - 1;
                b = 1;
                
            }
        }

        cout << t << endl;
    }
}