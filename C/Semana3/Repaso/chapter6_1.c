/*------------------------------------------------*/
/*  Program chapter6_1                            */
/*                                                */
/*  This program demonstrate the relationship     */
/*  between variables and addresses.              */
/*                                                */
/*
  Name: chapter6_1
  Copyright: 1995 by Prentice-Hall, Inc.
  Author: Delores M. Etter
  Date: 09/08/23 02:12
  Description: page 277; Engineering Problem Solving with ANSI C Fundamental
  Concepts; Alan R. Apt Book.
*/


#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    /*  Declare and initialize variables.  */
    int a = 1, b = 2;
    
    /*  Declare and initialize variables.  */
    printf("a = %i; address of a = %u \n", a, &a);
    printf("b = %i; address of b = %u \n", b, &b);
    
    getchar();
  /*  Exit program.  */
 return EXIT_SUCCESS;   
}

