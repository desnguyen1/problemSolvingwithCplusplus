//testing ifstream ofstream
#include <iostream>
#include <fstream>

int main(){
    std::ifstream inFile;
    std::ofstream outFile;
    int a[10], testVar;

    inFile.open("test.txt");
    outFile.open("outFile.txt");
    if(inFile.fail() || outFile.fail()){
        std::cout<<"\nError opening the file";
    }
    else{
        std::cout<<"\nSuccess!";
    }
    for(int i = 0; i < 10; i++){
        inFile >> a[i];
        std::cout<<"\n"<<a[i];

        //ouput
        outFile << "\nNumber: "<<a[i];
    }

    std::cout<<std::endl;
    return 0;
}