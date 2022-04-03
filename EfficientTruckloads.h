# ifndef EFFICIENTTRUCKLOADS_H
# define EFFICIENTTRUCKLOADS_H

# include <iostream>
# include <string>

using namespace std;

class EfficientTruckloads {
    public:
        int numTruck (int numCrates, int loadSize);

    private:
        int numCrates, loadSize, value1, value2;
        int nTrucks = 1;
        int division = 0;
        int ptr = 0;
        int table[10][100];
};

# endif