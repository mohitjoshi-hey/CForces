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
        long long n, m;
        cin >> n;
        m = n;
        long long count2 = 0;
        long long count3 = 0;
        while(m > 1){
            if(m % 3 == 0){
                m = m / 3;
                count3++;
            }
            else if(m % 2 == 0){
                m = m / 2;
                count2++;
            }
            else{
                break;
            }
        }

        cout << (m == 1 ? (count2 > count3 ? -1 :  2* count3 - count2) : -1) << endl;
    }
    return 0;
}