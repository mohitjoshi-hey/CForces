#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <unordered_map>
#include <math.h>
#include <stack>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int k = a * b;

        int x = a;

        int y = b - c;

        cout << x << " " << y << endl;
    }
}