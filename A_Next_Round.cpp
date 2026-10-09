#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int n, p;
    cin >> n >> p;
    vector <int> scores(n);

    for(int i = 0; i < n; i++){
        cin >> scores[i];
    }
    int contestant = 0;
    for(int j = 0; j < n; j++){
        if(scores[j] > 0 && scores[j] >= scores[p - 1]){
            contestant++;
        }
        else{
            break;
        }
    }

    cout << contestant << "\n";
}