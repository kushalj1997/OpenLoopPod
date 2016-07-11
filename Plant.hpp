//
//  Plant.hpp
//  
//
//  Created by Kushal Jaligama on 7/11/16.
//
//

#ifndef Plant_hpp
#define Plant_hpp

#include <stdio.h>

class Plant {
public:
    Plant(bool ac = false) {
        actuated = ac;
    }
    bool actuate();
    
protected:
    bool actuated;
};

#endif /* Plant_hpp */
