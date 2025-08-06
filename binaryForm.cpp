#include <iostream>
using namespace std;

int main() {
  int decNum = 5;
  int ans = 0;
  // since we have to add backwords, using power will do the work;
  int pow = 1;

  while (decNum > 0){
    //taking out the remainder ;
    int rem = decNum % 2;
    //actually dividing the number;
    decNum = decNum/2;
    //adding to answer by multiplying with power;
    ans += rem * pow;
    //power increases by 10;
    pow *= 10;
  }
  cout << ans << endl;

    return 0;
}