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
        int co = 0;
        for(int i = 0; i < n - 1; i++){
            if(num[i] == 0){
                if(num[i + 1] != 0){
                    co++;
                }
            }
        }
        if(num[0] != 0){
            co++;
        }

        int b = *min_element(num.begin(), num.end());

        if(co == 0){
            cout << "0\n";
        }
        else if(b==1 || co == 1){
            cout << "1\n";
        }
        else if(co > 1){
            cout << "2\n";
        }
    }

    return 0;
}