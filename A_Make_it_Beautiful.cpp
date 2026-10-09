#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> bin(n);

        for(int i = 0; i < n; i++){
            cin >> bin[i];
        }

        int sum = 0;
        bool is_ugly = false;
        for(int i = 1; i < n; i++){
            sum += bin[i - 1];
            if(sum == bin[i]){
                is_ugly = true;
            }
        }

        if(is_ugly){
            vector<int> v2 = bin;
            sort(bin.rbegin(), bin.rend());
            if(bin[0] == bin[1]){
                swap(bin[0], bin[n - 1]);
            }
            if(bin == v2){
                cout << "NO\n";
            }
            else{
                cout << "YES\n";

                for(int x: bin){
                    cout << x << " ";
                }
                cout << "\n";
            }
        }
        else{
            cout << "YES\n";

            for(int x: bin){
                cout << x << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}