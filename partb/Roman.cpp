// TODO: implement romanToInteger in here
#include "Roman.h"
#include <vector>
using std::vector;

int romanToInteger(const string & s) {
    int dec = 0;
    for (int i = 0; i < s.length(); ++i) {
        switch(s.at(i)) {
            case 'I':
                ++dec;
                break;
            case 'V':
                if (i > 0 && s.at(i - 1) == 'I') dec += 3;
                else dec += 5;
                break;
            case 'X':
                if (i > 0 && s.at(i - 1) == 'I') dec += 8;
                else dec += 10;
                break;
            case 'L':
                if (i > 0 && s.at(i - 1) == 'X') dec += 30;
                else dec += 50;
                break;
            case 'C':
                if (i > 0 && s.at(i - 1) == 'X') dec += 80;
                else dec += 100;
                break;
            case 'D':
                if (i > 0 && s.at(i - 1) == 'C') dec += 300;
                else dec += 500;
                break;
            case 'M':
                if (i > 0 && s.at(i - 1) == 'C') dec += 800;
                else dec += 1000;
                break;
        }
    }
    return dec;
}