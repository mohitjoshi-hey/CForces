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
        int n;
        cin >> n;
        string p;
        cin >> p;

        int len = 0;

        int s = 0, e = n - 1;

        while(s <= e){
            if(p[s] == '1' && p[e] == '0' || p[s] == '0' && p[e] == '1'){
                s++;
                e--;
            }
            else{
                break;
            }
        }

        if(e < s){
            len = 0;
        }
        else{
            len = e - s + 1;
        }

        cout << len << "\n";
    }

    return 0;
}