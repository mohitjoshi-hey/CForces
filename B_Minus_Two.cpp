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
        
        vector<int> v(n);

        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        int c_odd = 0, c_evO = 0, c_evE = 0;

        for(int i = 0; i < n; i++){
            if(v[i] % 2 != 0){
                c_odd++;
            }
            else {
                int k = v[i] / 2;

                if(k % 2 != 0){
                    c_evO++;
                }
                else{
                    c_evE++;
                }
            }
        }

        int lm = max({c_evE, c_evO, c_odd});

        cout << lm << endl;
    }

    return 0;
}