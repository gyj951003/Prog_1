//
//  day.c
//  Prog#1
//
//  Created by Jasmine_Gao on 4/9/17.
//  Copyright © 2017 Yinjie_Gao & Yisheng_Zhang. All rights reserved.
//

#include "day.h"

void create(Day* day, short d, short m, short y){
    day->day = d;
    day->month = m;
    day->year = y;
    day->appCount = 0;
    return;
}
