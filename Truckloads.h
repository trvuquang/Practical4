# ifndef TRUCKLOADS_H
# define TRUCKLOADS_H

# include <iostream>
# include <string>
# include <algorithm>

using namespace std;

class Truckloads {
    public:
        int numTruck (int numCrates, int loadSize);

    private:
        int numCrates, loadSize, value1, value2;
        int nTrucks = 1;
};

# endif