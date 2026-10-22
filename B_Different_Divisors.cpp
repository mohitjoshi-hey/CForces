#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int d;
        cin >> d;

        int a = 1;
        int b = a + d;
        int c = b + d;
        int e = b*c;

        cout << b*c << "\n";
    }
}