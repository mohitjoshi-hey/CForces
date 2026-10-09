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
        int sum = 0;

        vector<int> eff(n - 1);
        for(int i = 0; i < n - 1; i++){
            cin >> eff[i];
            sum += eff[i];
        }

        cout << -sum << endl;

    }

    return 0;
}