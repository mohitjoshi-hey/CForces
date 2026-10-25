#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        unordered_map<int, int> m1;
        unordered_map<int, int> m2;
        int cou = 1;

        vector<int> v1(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (v1[i] == v1[i + 1])
            {
                cou++;
            }
            else
            {
                m1[v1[i]] = max(cou, m1[v1[i]]);
                cou = 1;
            }
        }

        m1[v1[n - 1]] = max(cou, m1[v1[n - 1]]);

        cou = 1;

        vector<int> v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (v2[i] == v2[i + 1])
            {
                cou++;
            }
            else
            {
                m2[v2[i]] = max(cou, m2[v2[i]]);
                cou = 1;
            }
        }

        m2[v2[n - 1]] = max(cou, m2[v2[n - 1]]);

        int max_size = 0;

        for(auto it: m1){
            int k;
            auto it2 = m2.find(it.first);
            if(it2 != m2.end()){
                k = it.second + it2->second;
            }
            else {
                k = it.second;
            }

            max_size = max(k, max_size);
        }

        for(auto it: m2){
            int k;
            auto it1 = m1.find(it.first);
            if(it1 != m1.end()){
                k = it.second + it1->second;
            }
            else {
                k = it.second;
            }

            max_size = max(k, max_size);
        }

        cout << max_size << endl;
    }
}