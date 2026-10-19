#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;


int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;
        bool oddDiv = false;
        
        while(n  > 0){
            if(n > 1 && n % 2 != 0){
                oddDiv = true;
                break;
            }
            n = n / 2;
        }

        cout << (oddDiv ? "YES" : "NO") << endl;
    }

    return 0;
}