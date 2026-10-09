#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector <pair<int, int>> cards(n);

        for(int i = 0; i < n; i++){
            if(cards[i].first >= 1){
                cards[i].first++;
            }
            else{
                cin >> cards[i].second;
                cards[i].first = 1;
            }
        }

        sort(cards.begin(), cards.end());

        
        
        
    }
}