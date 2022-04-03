# ifndef REVERSE_H
# define REVERSE_H

# include <iostream>
# include <string>
# include <algorithm>

using namespace std;

class Reverse {
    public:
        string reverseString(string letters);
        int reverseDigit(int value);

    private:
        string letters;
        string tmp;
        char temp[20];
        int value, rem, length;
        int ptr = 0;
        int sum = 0;
};

# endif