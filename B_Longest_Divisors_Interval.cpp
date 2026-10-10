#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <math.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        long long i = 1;

        while(n % i == 0){
            i++;
        }



        cout << i - 1 << endl;
    }
}