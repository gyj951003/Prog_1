//
//  time.h
//  Prog#1
//
//  Created by Jasmine_Gao on 4/9/17.
//  Copyright © 2017 Yinjie_Gao & Yisheng_Zhang. All rights reserved.
//

#ifndef time_h
#define time_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    short hour;
    short minute;
} Time;//def struct Time

void read();

void print();

bool lessThan();


#endif /* time_h */
