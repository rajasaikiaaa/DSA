#include<iostream>
using namespace std;

int main() {

    int array[5] = {1,2,3,4,5};
    int n = sizeof(array)/sizeof(array[0]);

    for(int st=0; st<n; st++){
        for(int end=st; end<n; end++){
            for(int i=st; i<=end; i++){
                cout << array[i];
            } cout << " ";
        } cout << endl;
    }
    return 0;
}