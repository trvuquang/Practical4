# include <iostream>
# include <string>
# include "Reverse.cpp"
# include "Truckloads.cpp"
# include "EfficientTruckloads.cpp"
# include <bits/stdc++.h>

// sourced from: https://www.geeksforgeeks.org/getline-string-c/

using namespace std;

int main (){

    // Initialization
    Reverse rev;
    Truckloads truck;
    EfficientTruckloads effTruck;
    string s;
    int i, numCrates, loadSize;

    // Get 4 items from getline
    string S, T[4], temp; 
    getline(cin, S);
    stringstream X(S);
    int index = 0;
    while (getline(X, temp, ' ')) {
        T[index] = temp;
        index++;
    }

    // returning the revered int in first entry
    try {
        i = stoi(T[0]);
        cout << rev.reverseDigit(i);
        cout << " ";
    }
    catch (const char* msg) {
        cerr << msg;
    }
    
    // returning the revered string in second entry
    try {
        s = T[1];
        cout << rev.reverseString(s);
        cout << " ";
    }
    catch (const char* msg) {
        cerr << msg;
    }

    // returning the revered string in third and fourth entry
    numCrates = stoi(T[2]);
    loadSize = stoi(T[3]);

    try {
        cout << truck.numTruck(numCrates, loadSize);
        cout << " ";
    }
    catch (...) {
        cerr << "ERROR";
    }    
    
    try {
        cout << effTruck.numTruck(numCrates, loadSize);
        cout << " ";
    }
    catch (...) {
        cerr << "ERROR";
    }  

}    