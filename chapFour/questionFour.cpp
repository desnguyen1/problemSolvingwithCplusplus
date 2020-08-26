//Question four in chapter 4
//input a four digit value, adds the digits up, then take off far right digit and repeat process
//ex: 1234 = 10, 123 = 6, 12 = 3, 1 = 1
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
//function prototypes
//function will sum up integers
int addAllInts(int remainingNum, int numDigits);
//function will remove the far right digit
int removeFarRight(int number);
//function turns int -> English (hard way) NOTE: highest value is 36 = 9999
string numberToWord(int value);

int main(){
    int num, numDigits = 4, currentSum;
    string word;
    cout<<"Enter a four digit integer: ";
    cin>>num;
    do{
       currentSum = addAllInts(numDigits, num);
        word = numberToWord(currentSum);
        cout<<" "<<word<<endl;
        num = removeFarRight(num); //removing far right digit
        //cout<<"\nNew number: "<<num;
        numDigits--;
    }while(numDigits > 0);
    cout<<endl;
    return 0;
}
//digitValue is the value of num
int addAllInts(int remainingNums, int digitValue){
    int sum = 0;
    cout<<"\nNumber "<<digitValue<<" ";
    while(digitValue != 0){
        sum += digitValue % 10; //gets the far right digit, i.e., 14 % 10 = 4
        digitValue /= 10; //removes the far right digit to avoiding adding same one twice
    }
    cout<<"sum: "<<sum;
    return sum;
}

int removeFarRight(int number){
    return number / 10;
}

string numberToWord(int value){
    //cout<<"\nValue: "<<value;
    int tenValue, oneValue;
    string tens, ones, word;
    oneValue = value % 10; // 34 mod 10 = 4 to get the ones
    tenValue = (value/10) % 10; // 34/10 = 3 mod 10 = 3 to get the tens position
    if(value >= 10 && value < 20){
        switch (value)
        {
        case 10:
            word = "ten";
            break;
        case 11:
            word = "eleven";
            break;
        case 12:
            word = "twelve";
            break;
        case 13:
            word = "thirteen";
            break;
        case 14:
            word = "fourteen";
            break;
        case 15:
            word = "fifteen";
            break;
        case 16:
            word = "sixteen";
            break;
        case 17:
            word = "seventeen";
            break;
        case 18:
            word = "eighteen";
            break;
        default:
            word = "nineteen";
            break;
        }
    }
    else{
        switch (oneValue)
        {
        case 1:
            ones = "one";
            break;
        case 2:
            ones = "two";
            break;
        case 3:
            ones = "three";
            break;
        case 4:
            ones = "four";
            break;
        case 5:
            ones = "five";
            break;
        case 6:
            ones = "six";
            break;
        case 7:
            ones = "seven";
            break;
        case 8:
            ones = "eight";
            break;
        case 9:
            ones = "nine";
            break;
        default:
            break;
        }
        switch (tenValue)
        {
        case 2:
            tens = "twenty";
            break;
        case 3:
            tens = "thirty";
            break;
        default:
            break;
        }
        word = tens + "-" + ones;
    }
    return word;
}