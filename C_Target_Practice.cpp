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
        int k = 10;
        int j = 1;
        int score = 0;
        while(k--){
            vector<int> v(10);
            for(int i = 0; i < 10; i++){
                cin >> v[i];
            }
            for(int i = 0; i < 10; i++){
                if(v[i] == 'X'){
                    if(i < j - 1 || i > 10 - j){
                        
                    }
                }
            }

            j++;
        }
        cout << tot_score << "\n";
    }

    return 0;
}