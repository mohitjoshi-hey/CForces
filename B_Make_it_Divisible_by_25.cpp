#include <iostream>
#include <climits>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string num;
        cin >> num;

        int s = num.size();
        int is_0 = -1, is_7 = -1, is_5 = -1, is_51 = -1, is_2 = -1, is_01 = -1;

        for(int i = s - 1; i >= 0; i--){
            if(num[i] == '5'){
                is_5 = max(is_5, i);
            }
            else if(num[i] == '0'){
                is_0 = max(is_0, i);
            }
        }
        for(int i = s - 1; i >= 0; i--){
            if(num[i] == '2' && i < is_5){
                is_2 = max(is_2, i);
            }
            else if(num[i] == '7' && i < is_5){
                is_7 = max(is_7, i);
            }
            else if(num[i] == '5' && i < is_0){
                is_51 = max(is_51, i);
            }
            else if(num[i] == '0' && i < is_0){
                is_01 = max(is_01, i);
            }
        }

        int min_rem = INT_MAX;

        if(is_5 != -1 && is_7 != -1){
            min_rem = min(min_rem, s - is_7 - 2);
        }
        if(is_5 != -1 && is_2 != -1){
            min_rem = min(min_rem, s - is_2 - 2);
        }
        if(is_51 != -1 && is_0 != -1){
            min_rem = min(min_rem, s - is_51 - 2);
        }
        if(is_01 != -1 && is_0 != -1){
            min_rem = min(min_rem, s - is_01 - 2);
        }
         
        cout << min_rem << endl;
    }
}