//Practice Programming Projects 
//First question on programming projects

#include <iostream>
using namespace std;
int main(){
    double testOne, testTwo, difference, testAvg;
    cout<<"\nEnter test one score: ";
    cin>>testOne;
    cout<<"\nEnter test two score: ";
    cin>>testTwo;
    difference = testOne - testTwo;
    testAvg = (testOne + testTwo) / 2;
    cout<<"\nDifference: "<<difference<<"\nTest Avg: "<<testAvg<<endl;
    return 0;
}