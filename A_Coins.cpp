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
        long long n, k;
        cin >> n >> k;
        string ans;

        if (n % 2 == 0 && k % 2 == 0)
        {
            ans = "YES";
        }
        else if (n % 2 != 0 && k % 2 == 0)
        {
            ans = "NO";
        }
        else if (n % 2 != 0 && k % 2 != 0)
        {
            ans = "YES";
        }
        else if (n % 2 == 0 && k % 2 != 0)
        {
            ans = "YES";
        }

        cout << ans << "\n";
    }

    return 0;
}