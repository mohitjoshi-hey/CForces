#include<iostream>
#include<numeric>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> v(n);

        for(int i = 0; i < n;i++){
            cin >> v[i];
        }

        int i = 0, j = n - 1;
        int maxCou = 0;

        long long sumLeft = v[i];
        long long sumRight = v[j];
        while(i < j){
            if(sumLeft == sumRight){
                int count = i + 1 + n - j;
                maxCou = max(maxCou, count);
                i++;
                j--;
                sumRight += v[j];
                sumLeft += v[i];
            }

            if(sumLeft < sumRight){
                i++;
                sumLeft += v[i];
            }
            else if(sumLeft > sumRight){
                j--;
                sumRight += v[j];
            }
        }

        cout << maxCou << "\n";
    }
}