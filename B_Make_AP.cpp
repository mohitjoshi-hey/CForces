#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        bool isAP = false;
        b = 2 * b;

        int m = a+c, n = b- a, o = b - c;
        
        if(a == b && b == c){
            isAP = true;
        }
        else if(m % b == 0 && m != 0){
            int t = m / b;
            if(t > 0)
                isAP = true;
        }
        else if(n % c == 0 && n != 0){
            int t = n / c;
            if(t > 0)
                isAP = true;
        }
        else if(o % a == 0 && o != 0){
            int t = o / a;
            if(t > 0)
                isAP = true;
        }

        cout << (isAP ? "YES" : "NO") << endl;
    }
}