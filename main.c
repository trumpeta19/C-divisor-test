//
//  main.c
//  prime_test
//
//  Created by Tamara on 12/23/19.
//  Copyright © 2019 Tamara. All rights reserved.
//

/*  This program displays the divisors of a positive whole number.
    At this point in time, there are no restrictions on entering non-integers.
    There are user instructions to enter a whole number.
    The program restricts entries to anything greater than 1. */

#include <stdio.h>

main()

{
    
    int divisor; //user entered number
    int i; // possible divisor
    
    printf("Enter a positive whole number to test: ");
    scanf(" %d", &divisor);
    
    while (divisor < 1)
        
    {
        printf("Invalid entry. Enter a positive whole number: \n\n");
        scanf(" %d", &divisor);
    }
    
    for (i = 1; i <= divisor; i++)
    {
        
        //printf("The number is divided by %d.\n", i);
        if (divisor % i == 0)
        {
           printf("Divisible by %d\n", i);
        }
        
    }
        
    return 0;
}
