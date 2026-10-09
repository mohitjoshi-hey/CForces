#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector <int> towers(n);
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> towers[i];
            if(i > 0 && towers[i] > towers[i - 1]){
                towers[i] = towers[i - 1];
            }
            sum += towers[i];
        }

        cout << sum << "\n";
    }
    return 0;
}