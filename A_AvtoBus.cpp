#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        bool is4 = n % 4 == 0;
        bool is6 = n % 6 == 0;

        long long a = n / 4;
        long long b = n / 6;

        long long c = n / 4;        
        long long d = ((n - c*4) / 6);
        long long e = n / 6;        
        long long f = (n - e*6) / 4;


        long long x = d*6 + c*4;
        long long y = e*6 + f*4;

        bool ismix1 = x == n;
        bool ismix2 = y == n;

        d = (x == n ? d : -1);
        f = (y == n ? f : -1);

        long long ans1;
        long long ans2;

        if()

        
        
        cout << endl;
    }
}