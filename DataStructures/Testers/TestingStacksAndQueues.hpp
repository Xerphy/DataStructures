//
//  TestingStacksAndQueues.hpp
//  DataStructures
//
//  Created by Schimel, Dustin on 2/28/18.
//  Copyright © 2018 Schimel, Dustin. All rights reserved.
//

#ifndef TestingStacksAndQueues_hpp
#define TestingStacksAndQueues_hpp

#include "../Controller/Tools/Timer.hpp"
#include "../Controller/FileController.hpp"
#include "../Model/Structures/Linear/Queue.hpp"
#include "../Model/Structures/Linear/Stack.hpp"
#include "../Model/Structures/Linear/List.hpp"
#include <iostream>

using namespace std;

class TestingStacksAndQueues
{
public:
    void stackVersusList();
    void stackVersusQueue();
    void queueVersusList();
};


#endif /* TestingStacksAndQueues_hpp */
