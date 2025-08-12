#include <iostream>
#include <vector>
using namespace std;

//iterative code for binary Search;
//function of binary Search
//parameters are - vector and a int target
int binarySearch(vector<int> arr, int tar){


    //initiating starting and ending (two pointer approach)
    int st=0, end=arr.size()-1;

    //stopping condition is until st is less than or equal to end;
    while(st<=end){

        //finding the mid ;
        //this formula will give overflow as both the st and end are int;
        // int mid = (st+end)/2;

        //optimized formula for finding mid;
        int mid = st + ((end -st)/2);

        //condition for what to do;
        if(tar>arr[mid]){
            st = mid+1;
        } else if(tar<arr[mid]){
            end=mid-1;
        } else {
            //return the index;
            return mid;
        }
    }

    //if target is not found in the array return -1;
    return -1;
}

int main() {
    //n = even;
    vector<int> arr1 = {-1,0,3,4,5,9,12};

    //n = odd;
    vector<int> arr2 = {-1,0,2,5,6,7,9,11,13,15,19,21};

    //calling the function;
    cout << binarySearch(arr1, 12) << endl;
    cout << binarySearch(arr2, 21) << endl;
    

    

    return 0;
}