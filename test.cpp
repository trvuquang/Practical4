# include <iostream>
# include <string>
# include "Reverse.cpp"
# include "Truckloads.cpp"
# include "EfficientTruckloads.cpp"
# include <bits/stdc++.h>

// sourced from: https://www.geeksforgeeks.org/getline-string-c/

using namespace std;

int main (){
    Reverse rev;
    Truckloads truck;
    EfficientTruckloads effTruck;

    try{
        int number = 123456;
        cout << rev.reverseDigit(number) << endl;

        string mess = "Helllooo12314!!";
        cout << rev.reverseString(mess) << endl;

        cout << truck.numTruck(14, 3) << endl;

    }

    catch (const char* msg) {
        cerr << msg << endl;
    }

    // Get 4 items from getline
    string S, T[4], temp;
 
    getline(cin, S);
 
    stringstream X(S);
    int i = 0;
    while (getline(X, temp, ' ')) {
        T[i] = temp;
        cout << T[i] << endl;
        i++;
    }

    int test_num = stoi(T[3]);
    test_num += 4;
    cout << test_num << endl;


    try{
        int test_num = stoi("-a");
        cout << test_num << endl;
    }
    catch (...) {
        cout << "ERROR!" << endl;
    }

}