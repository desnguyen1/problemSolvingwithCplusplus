//testing written code from Chapter 7
#include <iostream>
using namespace std;
//different functions for different tests
void rangeBasedForLoop();
int main(){
   rangeBasedForLoop();
    return 0;
}
void rangeBasedForLoop(){
    int arr[] = {2,4,6,8};
    for(int& x : arr){
        x++;
    }
    for(auto x : arr)
        cout<<x;
    cout<<endl;
}