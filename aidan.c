//
//  aidan.c
//  project 2
//
//  Created by Ohanian, Aidan on 9/3/19.
//  Copyright © 2019 Ohanian, Aidan. All rights reserved.
//

#include "aidan.h"

int AidanaskQuestion(void) {
    // /* Description : Examples, Ansi-style
    ** switch-case  *
    
#include <stdio.h>
    int main()

        int answer;
        //The question
        puts("How many days in a year? ");
        puts("A. 361");
        puts("B. 349");
        puts("C. 365");
        puts("D. None of the above. \n");
        //User input
        puts("Enter your answer from A to D \n");
        answer = getchar();
        switch(answer)
        {
            case 'A':
            case 'a':
                puts("Sorry, you are incorrect.");
                puts("There are not 361 days in a year");
                break;
            case 'B':
            case 'b':
                puts("Sorry. try again");
                puts("Not 349,(hint");
                break;
            case 'C':
            case 'c':
                puts("Very good, you are correct!!");
                puts("There are 365 days in a year");
                break;
            case 'D':
            case 'd':
                puts("Sorry. Number 3 is correct. ");
                break;
            default:
                puts("You responded with an inappropriate number");
        }
        return 0;
    printf("Hello, World! in aidan.c\n");
    return 0;
}
