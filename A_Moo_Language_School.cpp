#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        
        string s;
        cin >> s;
        int cost = 0;

        for(int i = 0; i < n; i++){
            int j = k;
            bool is_John = false;

            while(j > 0){
                if(s[i] == '0'){
                    is_John = true;
                }
                i++;
                j--;
            }
            i--;

            if(!is_John){
                cost++;
            }
        }

        cout << cost << endl;
    }

    return 0;
}