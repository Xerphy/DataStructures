//
//  Timer.hpp
//  DataStructures
//
//  Created by Schimel, Dustin on 1/31/18.
//  Copyright © 2018 Schimel, Dustin. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp

#include <time.h>
#include <assert.h>
#include <iostream>

class Timer
{
public:
    Timer();
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayInformation();
    void getTimeInMicoseconds();
    
    
private:
    clock_t executionTime;
};

#endif /* Timer_hpp */
