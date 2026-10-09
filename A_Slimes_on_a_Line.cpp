#include<iostream>
#include<vector>

using namespace std;

int main(){
    int T;
    cin >> T;

    while (T--) {
        int size;
        cin >> size;
        vector <int> pos(size);
        int sum = 0;
        for(int i = 0; i < size; i++){
            cin >> pos[i];
            sum += pos[i];
        }
        int avg = sum/size;
        int j = 0, steps = 0;
        while(j < size){
            if(avg < pos[j]){
                pos[j] -= 1;
                steps++;
            }
            else if(avg > pos[j]){
                pos[j] += 1;
                steps++;
            }
            j++;
        }
        cout << steps << endl;
    }
    return 0;
}