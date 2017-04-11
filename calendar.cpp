//
//  calender.c
//  Prog#1
//
//  Created by Jasmine_Gao on 4/9/17.
//  Copyright © 2017 Yinjie_Gao & Yisheng_Zhang. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "calendar.h"
#include "day.h"

#define MAX_SIZE 80
#define INIT_SIZE 30

void create (Calender* calender){
    calender->days = malloc(sizeof(Day) * INIT_SIZE);
    calender->size = INIT_SIZE;
    calender->count = 0;
}//create calender;


void readFile(Calendar* calendar){
    char str[MAX_SIZE];
    FILE* fp;
    fp = fopen ("appts.csv", "r");
    fgets(str, MAX_SIZE, fp);//need to ignore the first line??
    while (fgets(str, MAX_SIZE, fp) != NULL){
        char* ptr1 = strtok(str, "/");
        char* ptr2 = strtok(NULL, "/");
        char* ptr3 = strtok(NULL, "/");//CHECK: return NULL?????
        int d = atoi(ptr1);
        int m = atoi(ptr2);
        int y = atoi(ptr3);
        Day* dayTemp;
        create(dayTemp, d, m, y);
        while (equal(dayTemp, &calendar->days[calendar->count]) == false){
            if (calendar->count == calendar->size)
                resize(calendar);
            if (lessThan(dayTemp, &calendar->days[calendar->count]) == true){
                for (int i = calendar->size; i >= calendar->count; i--)
                    calendar->days[i] = calendar->days[i-1];
                calendar->days[calendar->count] = *dayTemp;
                calendar->count--;
            }//if less than;
            calendar->count++;
        }//while
        read(&calendar->days[calendar->count--]);
    }//while, get line;
    fclose(fp);
}

void resize(Calendar* calender){
    
}

