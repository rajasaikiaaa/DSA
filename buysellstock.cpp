#include <iostream>
#include <climits>
using namespace std;

int main() {
    //brute force;

    int array[] = {7,1,5,3,6,4};
    //taking out the size of the array;
    int n = sizeof(array)/sizeof(array[0]);
    
    int  maxProfit = 0;
    int bestBuy = array[0];

    for( int i=1; i<n; i++){
        if(array[i] > bestBuy){
            maxProfit = max(maxProfit, array[i] - bestBuy);
        }
        bestBuy = min(bestBuy, array[i]);
    }
    cout << maxProfit << endl;
   
    
    
    return 0;
}