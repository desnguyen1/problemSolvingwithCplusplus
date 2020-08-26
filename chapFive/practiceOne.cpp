//Practice Problems Chapter 5 Question 1
#include <iostream>
#include <cassert>
using std::cin;
using std::cout;
using std::endl;
//function prototypes
int maxNumber(int x, int y, int z, int h);
int minNumber(int x, int y, int z, int h);
int main(){
    int n1, n2, n3, n4, biggestNum, smallestNum;
    cout<<"\nEnter four numbers followed by a space: ";
    cin>>n1>>n2>>n3>>n4;
    cout<<"\n1: "<<n1<<" 2: "<<n2<<" 3: "<<n3<<" 4: "<<n4;
    biggestNum = maxNumber(n1, n2, n3, n4);
    cout<<"\nBiggest Number: "<<biggestNum;
    smallestNum = minNumber(n1, n2, n3, n4);
    cout<<"\nSmallest Number: "<<smallestNum<<endl;
    assert(3<0); //example of using assert when debugging, because 3 is greater than 0, it will display an error
    return 0;
}
int maxNumber(int x, int y, int z, int h){
    int max;
    max = x;
    for(int i = 0; i<4; i++){
        if(y > max) 
            max = y;
        if(z > max)
            max = z;
        if(h > max)
            max = h;
    }
    return max;
}
int minNumber(int x, int y, int z, int h){
    int min;
    min = x;
    for(int i = 0; i<4; i++){
        if(y < min)
            min = y;
        if(z < min)
            min = z;
        if(h<min)
            min = h;
    }
    return min;
}