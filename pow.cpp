#include <iostream>
using namespace std;


int main() {
/*
//brute  force approach;

    double x = 10;
    int n = -2;
    //assigning a variale to store the power
    long double pow = 1;

    //checking if 'n' is positive or negative
    if( n<0){
        //n is negative and hence it is convereted to positive using the abs built-in function
        int con = abs(n);
        //iterating the 'x' for "n" number of times;
        for( int i=1; i<=con; i++){
            //storing and multiplying 'x'
            pow = pow * x;
        }
        //lastly after computing the squares of 'x' , it is divided by 1 to get the final ans;
        double ans = 1/pow;
        cout << ans << endl;
        //if 'n' is positive;
    } else {
        //running loop just to multiply 'x' for 'n' times;
        for( int i=1; i<= n; i++){
            pow = pow * x;
        }
        cout << pow << endl;
    }*/
    

    //time complexity is O(n); linear;



    /*optimal approach; //gives overflow when converting n to positive number if we
    multiply with n but if we multiply after storing it into long long int then it solves the problem*/

    double x = 2.0;
    int n = -2147483648;
    long long nn = n;
    double ans = 1;

    //converting n if it is negative;
    if( nn < 0){
        nn = -1 * nn;
    }


    //looping the solution;
    while ( nn > 1){
        //when n is even;
        if( nn%2 == 0){
            x *= x;
            nn = nn/2;
            //when n is odd;
        } else {
            ans *= x;
            nn = nn-1;
        }
    }

    
    //final answer when n reduced to 1;
    if( nn == 1){
        ans *= x;
    }

    //final answer if n is negative;
    if(n < 0){
        ans = 1.0/ans;
    }
    cout << ans << endl;
  


    return 0;
}