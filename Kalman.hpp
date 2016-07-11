//
//  Kalman.hpp
//  
//
//  Created by Kushal Jaligama on 7/11/16.
//
//

#ifndef Kalman_hpp
#define Kalman_hpp

#include <stdio.h>

class Kalman {
public:
	Kalman() {

	}

	vector<vector<double>> getState() {
		return stateMatrix;
	}

private:
	std::vector<vector<double>> stateMatrix;

};

#endif /* Kalman_hpp */
