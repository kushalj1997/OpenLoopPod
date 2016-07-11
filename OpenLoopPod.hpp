//
//  OpenLoopPod.hpp
//  
//
//  Created by Kushal Jaligama on 7/11/16.
//
//

#ifndef OpenLoopPod_hpp
#define OpenLoopPod_hpp

#include <stdio.h>
#include "Plant.hpp"

class OpenLoopPod {
public:
    OpenLoopPod() {
        currentVelocity = 0;
        currentPosition = 0;
        currentRoll = 0;
        currentPitch = 0;
        currentYaw = 0;
    }
    
    bool getState();
    bool changeState();
    
private:
    float currentVelocity;
    float currentPosition;
    float currentRoll;
    float currentPitch;
    float currentYaw;
    
    float predictedVelocity;
    float predictedPosition;
    float predictedRoll;
    float predictedPitch;
    float predictedYaw;
    
    Plant brakes;
    Plant skates;
    Plant pistons;
    Kalman filter;
};

#endif /* OpenLoopPod_hpp */
