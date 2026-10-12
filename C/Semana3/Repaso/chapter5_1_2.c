/*------------------------------------------------*/
/*  Program chapter5_1_2                          */
/*                                                */
/*  This program reads 100 values from a data file*/
/*  and determines the number of values greater   */
/*  the the average. Then calculates the dispersion*/
/*
  Name: chapter5_1_2
  Copyright: CC BY 4.0
  Author: CristianD. LopezR.
  Date: 08/08/23 21:53
  Description: Calculates the dispersion in a one dimensional column against the
  mean.
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define N 100
#define FILENAME "lab2.dat"

main()
{
  /*  Declare and initialize variables. */
  int k=0, npts, count=0;
  double y[N], y_ave, sum=0;
  FILE *lab;
  double dispersion(double arr[], int npts, double avg);
  
  /*  Open file, read data into an array, */
  /*  and compute a sum of the values. */    
  lab = fopen(FILENAME, "r");
  for (k=0; k<=N-1; k++)
  {
      fscanf(lab, "%lf", &y[k]);
      //printf("The value is: %lf\n", y[k]);
      sum += y[k];      
  }
  /*  and compute a sum of the values. */   
  while ((fscanf(lab, "%lf", &y[k])) == 1)
  {
     k++;      
  }
  npts = k;
  
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
  printf("%lf is the dispersion \n", dispersion(y, npts, y_ave));
  printf("Note: Dispersion depends on the distribution:\n");
  printf("\t-> For symetric distributions equals 0.\n");
  printf("\t-> For asymetric distributions is different from 0.\n");
  
  /*  are greater than the average.         */
  fclose(lab);
  
  sleep(10000);
  getchar(); 
  return EXIT_SUCCESS; 
}

double dispersion(double arr[], int n, double avg)
{
       int target;
       double disp;
       double diff[N];
       //printf("--------------------------\n");
       //printf("Dispersion function input is:\n");
       //printf("%lf\n", arr[0]);
       //printf("%lf\n", avg);
       //printf("--------------------------\n");
       disp = 0.0;
       for(target=0; target <= n-1; target++)
       {
         //printf("%lf\n", arr[target]);
         diff[target] = avg - arr[target];
         //printf("Difference is: %lf\n", diff[target]);
         
         disp = disp + diff[target];
         //printf("Dispersion is: %lf\n", disp);
       }
       return disp;
}
