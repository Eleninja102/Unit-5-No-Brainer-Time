//
//  Time.cpp
//  Unit 5: No Brainer: Time
//
//  Created by Coleton Watt on 9/30/21.
//

#include "Time.hpp"


Time::Time(){
    hours = 0;
    minutes = 0;
    seconds = 0;
}

Time::Time(int h, int m, int s){
    hours = h;
    minutes = m;
    seconds = s;
    adjustTime();

}

Time Time::operator +(Time t){
    int s = seconds + t.seconds;
    int m = minutes + t.minutes;
    int h = hours + t.hours;
    
    Time newTime(h, m, s);
    return newTime;
}

void Time::adjustTime(){
    //cout << "HIIII";
    if(seconds >= 60){
        int addMinutes = seconds /60;
        minutes += addMinutes;
        seconds -= (addMinutes*60);
    }
    if(minutes >= 60){
        int addHours = minutes /60;
        hours += addHours;
        minutes -= (addHours*60);
        //cout << "HIIII";
    }
}
Time Time::operator += (int s){
    seconds += s;
    adjustTime();
    return *this;
}


ostream& operator<< (ostream &out, Time&t){
    if(t.hours < 10) out << "0";
    out << t.hours << ":";
    if(t.minutes < 10) out << "0";
    out << t.minutes << ":";
    if(t.seconds < 10) out << "0";
    out << t.seconds << endl;
    
    return out;
    
}
