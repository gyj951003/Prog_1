//
//  main.c
//  Prog#1
//
//  Created by Jasmine_Gao on 4/9/17.
//  Copyright © 2017 Yinjie_Gao & Yisheng_Zhang. All rights reserved.
//

#include <stdio.h>
#include "calendar.h"

int getChoice(){
    int choice = 0;
    printf("Calendar Menu\n0. Done\n1. Search for date.\n2. Search for subject.\n\nYour choice >> ");
    scanf("%d", &choice);
    while (choice != 0 && choice != 1 && choice != 2)
    {
        printf("Choice must be between 0 and 2.  Please try again.\n\n");
        printf("Calendar Menu\n0. Done\n1. Search for date.\n2. Search for subject.\n\nYour choice >> ");
        scanf("%d", &choice);
    }//ask for another input if the user's input is not 0-2;
    return choice;
}//print menu, ask for std input, check, return a valid choice;

int main(int argc, const char * argv[]) {
    Calendar calendar;
    create ();
    readFile ();
    int choice = getChoice();
    while (choice != 0){
        switch (choice)
        {
            case 1:
                dateSearch();
                break;
            case 2:
                subjectSearch();
                break;
        }//switch: based on choice;
        choice = getChoice();
    }//while: excute when user's choice is not "done";
    destory();
    return 0;
}//main
