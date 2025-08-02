#include <iostream>
using namespace std;

int main() {
    int array[] = {2,2,1,1,1,2,2};
    int n = sizeof(array)/sizeof(array[0]);

    int freq = 0;
    int ans = 0;

    for (int i=0; i<n; i++){
        if(freq == 0){
            ans = array[i];
        }
        if( ans == array[i]){
            freq++;
        } else {
            freq--;
        }
    }
    cout << ans << endl;



    return 0;
}