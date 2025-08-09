#include <iostream>
#include <vector>
using namespace std;

int main() {
    /*//brute force
    vector <int> height = {1,1};
    int n = height.size();


    int maxWater = 0;
    for( int i=0; i<n; i++){
        for( int j=i+1; j<n; j++){
            int finalHeight = min(height[i], height[j]);
            int width = j - i;
            int water = finalHeight * width;
            maxWater = max(maxWater , water);
        }
    }
    cout << maxWater << endl;*/
   
    //optimal approach

    //two pointer approach;



     vector <int> height = {1,8,6,2,5,4,8,3,7};
    int n = height.size();

    int a = 0;
    int b = n-1;

    int maxWater = 0;

    while (b>a){
        int maxheight= min(height[a], height[b]);
        int width = b - a;
        int water = maxheight * width;
         maxWater = max(water, maxWater);
        
         if( height[a] < height[b]){
            a++;
         } else {
            b--;
         }
        }
    cout << maxWater << endl;







    return 0;
}