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
        int nx, ns;
        cin >> nx >> ns;
        string x, s;
        cin >> x >> s;

        int oper = 0;
        while (x.size() <= s.size())
        {
            x += x;
            oper++;
        }

        int res = x.find(s);
        if (res != string::npos){
            cout << oper << "\n";
        }
        else{
            cout << -1 << "\n";
        }
    }

    return 0;
}