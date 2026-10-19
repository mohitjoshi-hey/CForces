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
        int a, b, c;
        cin >> a >> b >> c;
        int cou = 0;
        bool second = false;

        if(c % 2 != 0){
            cou = 1;
        }

        if(cou == 1){
            if(b > a){
                second = true;
            }
        }
        else{
            if(a <= b){
                second = true;
            }
        }
        cout << (second ? "Second" : "First") << "\n";
    }

    return 0;
}