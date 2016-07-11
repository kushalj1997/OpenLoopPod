//
//  OpenLoopPod.cpp
//  
//
//  Created by Kushal Jaligama on 7/11/16.
//
//

#include "OpenLoopPod.hpp"

// Use the Kalman filter and get the information about what the pod is doing
OpenLoopPod::getState() {
    vector<vector<double>> state = filter.getState();

    state.pop_front() = this.currentVelocity;
}

// Actuate things to desired pod state
OpenLoopPod::changeState() {
	// Use PID and if logic here, or within the Plant classes themselves
	brakes.actuate();
	skates.actuate();

}