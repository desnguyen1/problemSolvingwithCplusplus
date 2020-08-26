//Chapter three question one programming project
//Calculate cost of call
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    char dayLetterOne, dayLetterTwo;
    int minutes, time;
    double cost = 0;

    cout<<"\nKeycodes - Monday: Mo, Tuesday: Tu, Wednesday: We, Thursday: Th, Friday: Fr, Saturday: Sa, Sunday: Su";
    cout<<"\nEnter the day: ";
    cin>>dayLetterOne>>dayLetterTwo;
    dayLetterOne = toupper(dayLetterOne);
    dayLetterTwo = toupper(dayLetterTwo);
    //cout<<"\n"<<dayLetterOne<<dayLetterTwo;
    cout<<"\nEnter the time the call started (HHMM) in military time: ";
    cin>>time;
    cout<<"\nEnter number of minutes: ";
    cin>>minutes;
    if(dayLetterOne != 'S'){
        if(time >= 800 && time <= 1800){
            cost = minutes * 0.4;
        }
        else{
            cost = minutes * 0.25;
        }
    }
    else{
        cost = minutes * 0.15;
    }
    cout.setf(std::ios::fixed);
    cout.setf(std::ios::showpoint);
    cout.precision(2);
    cout<<"\nTotal Cost: $"<<cost<<endl;


    return 0;
}