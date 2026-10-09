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
        int index;

        vector <int> v(n);
        int count_2 = 0;

        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] == 2){
                count_2++;
            }
        }
  
        if(count_2 % 2 == 0){
            int d = count_2 / 2;
            for(int i = 0; i < n; i++){
                if(d == 0){
                    index = i;
                    break;
                }
                else if(v[i] == 2){
                    d--;
                }
            }
        }
        else{
            index = -1;
        }

        cout << (index == 0 ? 1 : index) << "\n";
    }

    return 0;
}