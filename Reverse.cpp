# include "Reverse.h"

using namespace std;


string Reverse::reverseString(string letters){
    length = letters.length();

    if (length >= 20){
        throw "ERROR";
    }
    else if (length > ptr){
        temp[ptr] = letters[length-ptr-1];
        ptr += 1;
        reverseString (letters);
    }
    else{
        return temp;
    }
    return temp;
}


int Reverse::reverseDigit(int num){

    if (num < 0 || num > 2147483647){
        throw "ERROR!";
        return -1;
    }    
    else if(num){
        rem = num % 10;
        sum = sum *10 + rem;
        reverseDigit(num / 10);
    }
    else
        return sum;
    return sum;
}
