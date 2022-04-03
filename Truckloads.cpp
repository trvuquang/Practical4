# include "Truckloads.h"

using namespace std;

int nTrucks = 1;
int Truckloads::numTruck (int numCrates, int loadSize){
    if (numCrates <= 0 || loadSize <= 0)
        throw "ERROR";

    if (numCrates > loadSize){
        nTrucks += 1;
        value1 = numCrates /2;
        value2 = numCrates - value1;

        if (value1 > loadSize){
            numTruck (value1, loadSize);
            nTrucks += 1;
        }

        if (value2 > loadSize){
            numTruck (value2, loadSize);
            nTrucks += 1;
        }

    }

    return nTrucks;

}