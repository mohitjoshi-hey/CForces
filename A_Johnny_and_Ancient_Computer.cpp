#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long a, b;
        cin >> a >> b;
        bool poss = true;

        long long c;
        if(a >= b){
            if(a % b != 0){
                poss = false;
            }
            else{
                c = a / b;
            }
        }
        else{
            if(b % a != 0){
                poss = false;
            }
            else{
                c = b / a;
            }
        }

        long long steps = 0;

        if(poss){
            while(c > 1){
                if(c % 2 != 0){
                    poss = false;
                    break;
                }
                c = c / 2;
                steps++;
            }
        }

        long long oper = 0;

        if(poss){
            long long d8 = steps / 3;
            oper += d8;
            steps -= d8 * 3;

            long long d4 = steps / 2;
            oper += d4;
            steps -= d4 * 2;

            long long d2 = steps / 1;
            oper += d2;
            steps -= d2 * 1;
        }

        cout << (poss ? oper : -1) << endl;
    }
}

  