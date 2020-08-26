//Call by Value vs Call by Reference Program
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
//function prototypes
void swapByValue(int x, int y);
void swapByRef(int& x, int& y);

int main(){
    int var1 = 1, var2 = 2;
    swapByValue(var1, var2);
    cout<<"\nCall by Value -- var1: "<<var1<<" var2: "<<var2;
    swapByRef(var1, var2);
    cout<<"\nCall by Reference -- var1: "<<var1<<" var2: "<<var2<<endl;
    return 0;
}
void swapByValue(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}
void swapByRef(int& x, int& y){
    int temp;
    temp = x;
    x = y;
    y=temp;
}