# include "EfficientTruckloads.h"

using namespace std;


int EfficientTruckloads::numTruck (int numCrates, int loadSize){
    if (numCrates <= 0 || loadSize <= 0)
        throw "ERROR";

    // if cannot load, increase no. Trucks
    // make division
    if (numCrates > loadSize){
        nTrucks += 1;
        value1 = numCrates /2;
        table[division][ptr] = value1;
        ptr++;
        value2 = numCrates - value1;
        table[division][ptr] = value2;
 
        
        if (value1 > loadSize){
            numTruck (value1, loadSize);
            nTrucks += 1;
        }

        if (value2 > loadSize){
            numTruck (value2, loadSize);
            nTrucks += 1;
        }

    division ++;
    }

    return nTrucks;

}