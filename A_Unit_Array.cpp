#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        
        for(int i = 0; i < n; i++){
            cin >> nums[i];
        }
        int oper = 0;

        int sum = 0;
        int pro = 1;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            pro *= nums[i];
        }

        while(sum < 0){
            sum += 2;
            oper++;
        }

        int oper2 = oper;
        while(oper2--){
            pro *= -1;
        }

        if(pro < 0){
            oper++;
        }

        cout << oper << "\n";
    }

    return 0;
}