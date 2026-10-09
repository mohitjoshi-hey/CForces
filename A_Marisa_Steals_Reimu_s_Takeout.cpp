#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;

    while(T--){
        int n;
        cin >> n;
        int x;
        int count_0 = 0, count_1 = 0, count_2 = 0;
        int operations = n;
        for(int i = 0; i < n; i++){
            cin >> x;
            if(x == 0){
                count_0++;
            }
            else if(x == 1){
                count_1++;
            }
            else{
                count_2++;
            }
        }
        int k = (count_1 + 2*count_2) / 3;
        int l = (count_1 + 2*count_2) % 3;
        if(l == 0 && k != 0){
            operations = 1;
        }
        if(k != 0){
            operations -= count_0;
        }

        while(k != 0 && l != 0){

        }
    }
    return 0;
}