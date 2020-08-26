//Programming Project chapter one from textbook
//Question 5: prints a 'C' with user's character of choice
#include <iostream>
using namespace std;

int main(){
    char choice = 'x';
    cout<<"\nEnter character choice: ";
    cin>>choice;
    cout<<endl;

    cout<<"\t  "<<choice<<" "<<choice<<" "<<choice<<endl;
    cout<<"\t "<<choice<<"     "<<choice<<endl;
    cout<<"\t"<<choice<<endl;
    cout<<"\t"<<choice<<endl;
    cout<<"\t"<<choice<<endl;
    cout<<"\t"<<choice<<endl;
    cout<<"\t"<<choice<<endl;
    cout<<"\t "<<choice<<"     "<<choice<<endl;
    cout<<"\t  "<<choice<<" "<<choice<<" "<<choice<<endl;

    return 0;
}
