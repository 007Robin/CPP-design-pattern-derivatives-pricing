//
//  PathDependent.h
//  ch7_exotics_engine_and_template_pattern
//
//  Created by cheerzzh on 21/6/14.
//  Copyright (c) 2014年 Jared Zhou. All rights reserved.
//

#ifndef __ch7_exotics_engine_and_template_pattern__PathDependent__
#define __ch7_exotics_engine_and_template_pattern__PathDependent__

#include "Arrays.h"
#include <vector>


// define the CashFlow and the PathDependent classes which give our path-dependent exotic option

class CashFlow
{
public:
    double Amount;
    unsigned long TimeIndex;
    
    CashFlow(const long TimeIndex_ = 0, double Amount_ =0.0): TimeIndex(TimeIndex_),Amount(Amount_){};
};




#endif /* defined(__ch7_exotics_engine_and_template_pattern__PathDependent__) */

class PathDependent
{
public:
    PathDependent(const MJArray& LookAtTimes); // pass in times need to return spot
    
    const MJArray& GetLookAtTimes() const;
    
};