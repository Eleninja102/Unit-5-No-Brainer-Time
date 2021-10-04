//
//  main.cpp
//  Unit 5: No Brainer: Time
//
//  Created by Coleton Watt on 9/30/21.
//

#include <iostream>

#include "Time.hpp"

using namespace std;

int main() {
    
    cout << "Testing Time\n";
    Time t1(0,59,45);
    Time t2(1, 3, 5);
    cout<< t2;
    
    Time t3 = t1 + t2;
    cout << t3;
    cout << "Add 10: ";
    t3 += 10; // add 10 seconds to time
    cout << t3;
    return 0;
}
