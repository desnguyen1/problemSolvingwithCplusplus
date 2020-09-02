//testing ifstream ofstream
#include <iostream>
#include <fstream>

int main(){
    std::ifstream inFile;
    std::ofstream outFile;
    int a[10], testVar;

    inFile.open("test.txt");
    if(inFile.fail()){
        std::cout<<"\nError opening the file";
    }
    else{
        std::cout<<"\nSuccess!";
    }
    for(int i = 0; i < 10; i++){
        inFile >> testVar;
        std::cout<<"\nTest var: "<<testVar<<std::endl;
        inFile >> a[i];
        std::cout<<"\n"<<a[i]<<std::endl;
    }
   

    return 0;
}