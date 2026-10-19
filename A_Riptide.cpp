#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int rounds = 0;

        while(a != b && b != c && c != a){
            if((a > b && a > c) && (c < b)){
                a--;
                c++;
            }
            else if((a > b && a > c) && (b < c)){
                a--;
                b++;
            }
            else if((b > a && b > c) && (c < a)){
                b--;
                c++;
            }
            else if((b > a && b > c) && (a < c)){
                b--;
                a++;
            }
            else if((c > a && c > b) && (b < a)){
                c--;
                b++;
            }
            else if((c > a && c > b) && (a < b)){
                c--;
                a++;
            }
            rounds++;
        }

        cout << rounds << "\n";
    }
}