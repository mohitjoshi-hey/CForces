#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        vector<pair<char, int>> v;

        char d = s[0];
        int freq = 1;

        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == d)
            {
                freq++;
            }
            else
            {
                v.push_back({d, freq});
                d = s[i];
                freq = 1;
            }
        }
        v.push_back({d, freq});
        int max_sum = 0;
        int index = 0;
        for (int i = 1; i < v.size() - 1; i++)
        {
            if ((v[i - 1].first == v[i + 1].first) && (v[i].second == 1))
            {
                int sum = v[i - 1].second + v[i + 1].second;
                if (max_sum < sum)
                {
                    max_sum = sum;
                    index = i;
                }
            }
        }

        if (index == 0)
        {
            
            cout << v.size() - 1 << "\n";
        }
        else
        {
            v.erase(v.begin() + index);

            for (int i = 1; i < v.size(); i++)
            {
                if (v[i].first == v[i - 1].first)
                {
                    v[i].second += v[i - 1].second;
                    v.erase(v.begin() + i - 1);
                    i--;
                }
            }
            cout << v.size() << "\n";
        }
    }
}