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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        bool poss = false;
        int steps = 0;

        if(b > d){

        }
        else if(b + c > d + a){

        }
        else{
            poss = true;
            while((d - b) != c - a){
                a--;
                steps++;
            }
            int k = d - b;
            while(k--){
                b++;
                steps++;
            }
        }

        cout << (poss ? steps :-1) << "\n";
    }

    return 0;
}