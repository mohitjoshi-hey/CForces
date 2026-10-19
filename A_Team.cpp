#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector <int> friends(3);
    vector <vector <int>> m;
    int solved = 0;

    while(t--){
        int count_0 = 0;
        for(int i = 0; i < 3; i++){
            cin >> friends[i];
            if(friends[i] == 0){
                count_0++;
            }
        }
        if(count_0 <= 1){
            solved++;
        }
    }

    cout << solved << "\n";
}