#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = 100001;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        x = min(x, abs(num));
    }

    cout << x << "\n";

    return 0;
}