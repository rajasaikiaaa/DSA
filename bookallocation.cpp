#include <iostream>
#include <vector>
using namespace std;

//function to check a number is valid or not;
bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages){
    int students = 1, pages = 0;

    for (int i=0; i<n; i++){
        //corner case;
        if(arr[i] > maxAllowedPages){
            return false;
        }

        if( pages + arr[i] <= maxAllowedPages){
            pages += arr[i];
        } else {
            students++;
            pages = arr[i];
        }
    }

    return students > m ? false : true;
}

//finding the range for the pages;
int allocation(vector<int> &arr, int n, int m){
    if(m>n){
        return -1;
    }

    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    int st=0, end = sum;
    int ans = -1;

    while (st <= end){
        int mid = st + (end - st)/2;

        //refering to a function;
        if(isValid(arr,n,m,mid)){
            ans = mid;
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }
    return ans;
}



int main() {
    vector<int> nums = {15,17,20};

    int n = 4, m = 2;

    cout << allocation(nums,n,m) << endl;
    return 0;


}