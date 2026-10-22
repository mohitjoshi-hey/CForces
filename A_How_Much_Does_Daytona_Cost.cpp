#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        
        bool k_there = false;

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x == k){
                k_there = true;
            }
        }

        cout << (k_there ? "YES" : "NO") << "\n";
    }

    return 0;
}