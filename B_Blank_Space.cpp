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
        bool is_0 = false;

        for(int i = 0; i < n; i++){
            cin >> bin[i];
            if(bin[i] == 0){
                is_0 = true;
            }
        }

        int len = 1;
        int size = 1;
        for(int i = 0; i < n - 1; i++){
            if(bin[i] == 0 && bin[i + 1] == 0){
                size++;
            }
            else{
                len = max(len, size);
                size = 1;
            }
        }
        len = max(len, size);

        cout << (is_0 ? len : 0) << "\n";
    }

    return 0;
}