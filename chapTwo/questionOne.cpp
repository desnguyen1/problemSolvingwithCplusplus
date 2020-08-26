//Chapter two programming projects from textbook
//Question one: calculates how much soda friend can drink
#include <iostream>

using namespace std;

int main(){
    char choice;
    const double forMouse (5); //lethal dose
    const double mouseMass (35); //mass of mouse
    double mouseLethality = forMouse / mouseMass; //1/7
    const double sodaMass (350); //mass of soda can
    const double artificialSweetner = 0.001;
    double sodaContains = sodaMass * artificialSweetner;
    double weightPerHundred = 45400; //in grams
    double goalWeight;
    double lethalityforHumans;
    double numCans; //number of sodas she can have 
    do{
        cout<<"\nEnter you goal weight in pounds: ";
        cin>>goalWeight;
        //converting pounds to grams
        goalWeight = (goalWeight/100) * weightPerHundred;
        cout<<"\ngoal in grams: "<<goalWeight;
        //how many grams is lethal for humans
        lethalityforHumans = goalWeight * mouseLethality; // weight times 1/7
        numCans = lethalityforHumans/sodaContains;
        cout<<"\nmouse lethality: "<<mouseLethality<<"\nsoda contains: "<<sodaContains<<"\nlethality for humans: "<<lethalityforHumans<<"\nNumber of cans before death: "<<numCans;
        cout<<"\nCalculate again? ";
        cin>>choice;
        cout<<endl;
    }while(choice == 'Y' || choice == 'y');
    return 0;
}