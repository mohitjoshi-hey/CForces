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
        vector<int> num(n);

        for(int i = 0; i < n; i++){
            cin >> num[i];
        }

        int a = *max_element(num.begin(), num.end());
        int b = *min_element(num.begin(), num.end());

        vector<int> v1;
        vector<int> v2;
        if(a == b){
            cout << -1 << "\n";
        }
        else{
            for(int i: num){
                if(i == b){
                    v1.push_back(i);
                }
                else{
                    v2.push_back(i);
                }
            }

            int m = v1.size();
            int s = v2.size();

            cout << m << " " << s  << "\n";
            for(int i: v1){
                cout << i << " ";
            }
            cout << "\n";
            
            for(int i: v2){
                cout << i << " ";
            }
            cout << "\n";
            }
    }

    return 0;
}