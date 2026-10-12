/*------------------------------------------------*/
/*  Program chapter6_1                            */
/*                                                */
/*  This program demonstrate the relationship     */
/*  between variables and addresses.              */
/*                                                */
/*
  Name: 
  Copyright: 1995 by Prentice-Hall, Inc.
  Author: Delores M. Etter
  Date: 09/08/23 22:48
  Description: 
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
 int k;
 double x[6] = {1.8, 1.9, 1.4, 1.4, 1.9, 1.3};
 double sum=0, *ptr=&x[0];
 
 printf("%lf\n", x[0]);
 
 for(k=0; k<=5; k++)
 {
  printf("%lf\n", *(ptr+k));
  sum += *(ptr+k);
 }
 
 printf("Sum is %lf\n", sum);   
 getchar();
 return EXIT_SUCCESS;
    
}
 /*
 https://people.math.sc.edu/Burkardt/c_src/c_arrays/c_arrays.html
 */   
