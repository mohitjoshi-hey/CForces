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
        for(int i = 1; i < nums.size(); i++){
            if((nums[i] % 2 == 0 && nums[i - 1] % 2 == 0) || (nums[i] % 2 != 0 && nums[i - 1] % 2 != 0)){
                oper++;

                nums.erase(nums.begin() + i - 1);
                i--;
            }
        }
        cout << oper << "\n";
    }

    return 0;
}