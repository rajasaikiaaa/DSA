#include <iostream>
#include <climits>
using namespace std;


int main() {
    int array[6] = {1,1,3,-4,9,2};
    int n = sizeof(array)/sizeof(array[0]);

    int currSum = 0;
    int maxSum = INT_MIN;


    for( int i=0; i<n; i++){
        currSum += array[i];
        maxSum = max(currSum, maxSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout << maxSum << endl;

    return maxSum;
}