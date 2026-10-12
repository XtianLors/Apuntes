/*------------------------------------------------*/
/*  Program chapter5_1                            */
/*                                                */
/*  This program reads 100 values from a data file*/
/*  and determines the number of values greater   */
/*  the the average.                              */
/*
  Name: 
  Copyright: 
  Author: 
  Date: 08/08/23 21:53
  Description: 
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define N 100
#define FILENAME "lab.dat"

main()
{
  /*  Declare and initialize variables. */
  int k, count=0;
  double y[N], y_ave, sum=0;
  FILE *lab;
  
  /*  Open file, read data into an array, */
  /*  and compute a sum of the values. */    
  lab = fopen(FILENAME, "r");
  for (k=0; k<=N-1; k++)
  {
      fscanf(lab, "%lf", &y[k]);
      printf("The value is: %lf\n", y[k]);
      sum += y[k];      
  }
  /*  Compute average and count values that */
  /*  are greater than the average.         */   
  y_ave = sum / N;
  for (k=0; k <= N-1; k++)
  {
      if (y[k] > y_ave)
         count++;
      
  }
  
  /*  are greater than the average.         */
  printf("%i values greater than the average \n", count);
  /*  are greater than the average.         */
  fclose(lab);
  
  sleep(10000);
  return EXIT_SUCCESS;
  
  
}
