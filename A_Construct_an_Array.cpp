#include<iostream>
#include<vector>

using namespace std;

int main(){
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector <int> nums(n);
        for(int i = 0; i < n; i++){
            nums[i] = i + 1;
            if(i > 1 && (nums[i] == nums[i - 1] + nums[i - 2])){
                nums[i] += 1;
            }
        }
    }
    return 0;
}