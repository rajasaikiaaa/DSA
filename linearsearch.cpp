#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector <int> nums = {1,2,3,4,5,6,7,8,9};
    int n = nums.size();
    int target = 9;

    int find = -1;
    for ( int i=0; i<n; i++){
        if( nums[i] == target){
            find = i;
        }
    }
    cout << find << endl;
    return 0;
}