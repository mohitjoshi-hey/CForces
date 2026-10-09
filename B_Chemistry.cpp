#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        bool poss;
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int t = n - k;
        map<char, int> m;
        for (char c : s)
        {
            m[c]++;
        }

        int co = 0, ce = 0;
        for (auto it : m)
        {
            auto a = it.second;
            if (a % 2 == 0)
            {
                ce++;
            }
            else
            {
                co++;
            }
        }
        if (t % 2 == 0)
        {
            if (k < co)
            {
                poss = false;
            }
            else
            {
                if ((k - co) % 2 == 0)
                {
                    poss = true;
                }
                else
                {
                    poss = false;
                }
            }
        }
        else
        {
            int d = k - co + 1;
            if(k < co - 1){
                poss = false;
            }
            else if (d % 2 == 0)
            {
                poss = true;
            }
            else
            {
                poss = false;
            }
        }

        cout << (poss ? "YES" : "NO") << endl;
    }
    return 0;
}
