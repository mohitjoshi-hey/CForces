#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <unordered_map>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        unordered_map<int, int> m;
        unordered_map<int, int> q;
        unordered_map<int, int> r;
        vector<bool> v2(n, false);
        long long ans = 0;
        int ov = 0;

        for (int i = 0; i < n - 4; i++)
        {
            int sum = v[i] + v[i + 2] - v[i + 4];

            if (r.find(i - 2) != r.end() && r[i - 2] == sum)
            {
                ov++;
            }

            if (r.find(i - 4) != r.end() && r[i - 4] == sum)
            {
                ov++;
            }

            r[i] = sum;
            m[sum]++;

            // if(v2[i]) ov++;
            // if(v2[i + 2]) ov++;
            // if(v2[i + 4]) ov++;
            // v2[i] = true;
            // v2[i + 2] = true;
            // v2[i + 4] = true;
        }

        int overl = 0;
        for (auto it : m)
        {
            int k =
            if (it.second > 1)
            {
                ans += (k * (k - 1)) / 2 - ov;
            }
        }

        cout << ans << endl;
    }
}