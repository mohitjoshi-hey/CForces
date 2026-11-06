// Accepted

#include<iostream>
#include<numeric>
#include<vector>
#include<algorithm>
#include<cmath>
#include<unordered_map>

using namespace std;

long long getGCD(vector<long long> &arr){
    if(arr.size() == 1){
        return arr[0];
    }

    long long k = gcd(arr[0], arr[1]);
    for(int i = 2; i < arr.size(); i++){
        k = gcd(k, arr[i]);
    }

    return k;
}

bool findPoss(vector<long long> &arr, long long val){
    bool poss = true;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] % val == 0){
            poss = false;
            break;
        }
    }

    return poss;
}

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<long long> odd;
        vector<long long> even;
        for(int i = 0; i < n; i++){
            long long k;
            cin >> k;

            if(i % 2 == 0){
                even.push_back(k);
            }
            else{
                odd.push_back(k);
            }
        }

        long long gcdOdd = getGCD(odd);
        long long gcdEven = getGCD(even);

        bool possOdd = findPoss(odd, gcdEven);
        bool possEven = findPoss(even, gcdOdd);

        cout << (possEven ? gcdOdd : (possOdd ? gcdEven : 0)) << endl;
    }
}