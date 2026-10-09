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
        int x, k;
        cin >> x >> k;
        int steps, s1, s2 = 0;

        if (x < k || x % k != 0)
        {
            steps = 1;
            s1 = x;
        }
        else
        {
            for (int i = x - 1; i > 0; i--)
            {
                if (i % k != 0 && (x - i) % k != 0)
                {
                    if (i == x)
                    {
                        steps = 1;
                        s1 = x;
                    }
                    else
                    {
                        steps = 2;
                        s1 = i;
                        s2 = x - i;
                        break;
                    }
                }
            }
        }

        if (s2 == 0)
        {
            cout << steps << "\n";
            cout << s1 << "\n";
        }
        else
        {
            cout << steps << "\n";
            cout << s1 << " " << s2 << "\n";
        }
    }

    return 0;
}