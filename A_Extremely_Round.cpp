#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int d;
        int co = 0;
        cin >> d;

        for(int i = 1; i <= d; i++){
            int f = i;
            int count = 0;
            while(f != 0){
                int q = f % 10;
                f = f / 10;
                if(q != 0){
                    count++;
                }
            }
            if(count == 1){
                co++;
            }
        }


        cout << co << "\n";
    }

    return 0;
}