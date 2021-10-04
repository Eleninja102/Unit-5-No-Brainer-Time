//
//  Time.hpp
//  Unit 5: No Brainer: Time
//
//  Created by Coleton Watt on 9/30/21.
//

#ifndef Time_hpp
#define Time_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Time{
public:
    Time();
    Time(int, int, int);
    Time operator +(Time);
    Time operator += (int);
    friend ostream& operator<< (ostream &out, Time&t);
    
private:
    int hours, minutes, seconds;
    void adjustTime();

    
};

#endif /* Time_hpp */

