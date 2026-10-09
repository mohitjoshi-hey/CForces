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

        vector <int> nums(n);

        for(int i = 0; i < n; i++){
            cin >> nums[i];
        }

        int max_num = *max_element(nums.begin(), nums.end());\

        for(int i = 0; i < n; i++){
            nums[i] = max_num - nums[i] + 1;
            cout << nums[i] << " ";
        }

        cout << "\n";
    }

    return 0;
}