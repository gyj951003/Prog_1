//
//  day.h
//  Prog#1
//
//  Created by Jasmine_Gao on 4/9/17.
//  Copyright © 2017 Yinjie_Gao & Yisheng_Zhang. All rights reserved.
//

#ifndef day_h
#define day_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "appt.h"


typedef struct {
    short day;
    short month;
    short year;
    Appointment* appt[8];
    short appCount;
} Day;//define struct Day;

void create (Day* day, int d, int m, int y);

bool equal (Day* day1, Day* day2);

bool lessThan (Day* day1, Day* day2);

void read(Days* day);

void print();

void subjectSearch();

void destory();

#endif /* day_h */
