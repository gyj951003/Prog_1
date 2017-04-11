//
//  appt.h
//  Prog#1
//
//  Created by Jasmine_Gao on 4/9/17.
//  Copyright © 2017 Yinjie_Gao & Yisheng_Zhang. All rights reserved.
//

#ifndef appt_h
#define appt_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "time.h"

typedef struct {
    Time startTime;
    Time endTime;
    char* subject;
    char* location;
} Appointment;//def struct Appointment;


void print();



void destory();


#endif /* appt_h */
