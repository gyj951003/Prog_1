//
//  calendar.h
//  Prog#1
//
//  Created by Jasmine_Gao on 4/9/17.
//  Copyright © 2017 Yinjie_Gao & Yisheng_Zhang. All rights reserved.
//

#ifndef calendar_h
#define calendar_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "day.h"

typedef struct {
    Day* days;
    int size;
    int count;
} Calendar;//def struct Calendar;

void create (Calendar* calendar);

void readFile(Calendar* calendar);

void resize(Calendar* calendar);

void dateSearch();

void getDate();

void subjectSearch();






#endif /* calendar_h */
