#include <iostream>
#include <vector>
using namespace std;


int main() {
    //brute force 
    vector <int> nums = {1,2,3,4};
    int n = nums.size();

    // vector <int> ans(n,1);

    // for( int i=0; i<n; i++){
    //     for( int j=0; j<n; j++){

    //         if( i != j){
    //             ans[i] *= nums[j];
    //         }
    //     }

    // }

    // cout << ans[1] << endl;

    //optimal approach;


    vector <int> prefix(n,1);
    vector <int> suffix(n,1);
    vector <int> ans(n,1);

    //prefix;
    for( int i=1; i<n; i++){
        prefix[i] = prefix[i-1] * nums[i-1];
    }

    //suffix
    for( int i=n-2; i>=0; i--){
        suffix[i] = suffix[i+1] * nums[i+1];
    }

    //
    for( int i=0; i<n; i++){
        ans[i] = prefix[i] * suffix[i];
    }


    for( int i : ans){
        cout << i << " ";
    }
    return 0;
}