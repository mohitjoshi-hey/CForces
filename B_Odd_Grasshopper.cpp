#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isEven(long long x){
    if(x % 2 == 0){
        return true;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long x, n;
        cin >> x >> n;
        
        if(!isEven(x)){
            if(!isEven(n)){
                if(isEven(n/2)){
                    x = x + n;
                }
                else{
                    x = x - n - 1;
                }
            }
            else{
                if(isEven(n/2)){
                    x = x;
                }
                else{
                    x--;
                }
            }
        }
        else{
            if(!isEven(n)){
                if(isEven(n/2)){
                    x = x - n;
                }
                else{
                    x = x + n + 1;
                }
            }
            else{
                if(isEven(n/2)){
                    x = x;
                }
                else{
                    x++;
                }
            }
        }

        cout << x << endl;
    }

    return 0;
}