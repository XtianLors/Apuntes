/*------------------------------------------------*/
/*  Program chapter6_4                            */
/*                                                */
/*  This program reads a seismic data file and    */
/*  then determines the times of possible seismic */
/*  events.                                       */
/*
  Name: chapter6_4
  Copyright: 1995 by Prentice-Hall, Inc.
  Author: Delores M. Etter
  Date: 09/08/23 22:48
  Description: page 289-299; Engineering Problem Solving with ANSI C Fundamental
  Concepts; Alan R. Apt Book.
*/

#include <stdio.h>
#include <stdlib.h>
#define FILENAME "seismic.dat"
#define MAX_SIZE 1000
#define THRESHOLD 1.5

int main()
{
  /*  Declare and initialize variables. */
    int k, npts, short_window, long_window;
    double sensor[MAX_SIZE], time_incr, short_power, long_power, ratio;
    FILE *file_ptr;
    double power_w(double *ptr; int n);
    
    /*  read data file.  */
    file_ptr = fopen(FILENAME, "r");
    fscanf(file_ptr, "%i &lf", &npts, &time_incr);
    
    if (npts > MAX_SIZE)
    {
       printf("Data file too large for array. \n");
       return EXIT_FAILURE;
    }
    else
    {
        /*  read data into an array.  */
        for (k=0; k<=npts-1; k++)
            fscanf(file_ptr, "%lf", &sensor[k]);
    }
    /*  Read data into an array.  */
    printf("Enter number of points for short-window: \n");
    scanf("%i", &short_window);
    printf("Enter number of points for long-window: \n");
    scanf("%i", &long_window);

    /*  read data file.  */
    for (k=long_window - 1; k <= npts-1; k++)
    {
        short_power = power_w(&sensor[k], short_window);
        long_power = power(&sensor[k], long_window);
        ratio = short_power/long_power;
        
        if (ratio > THRESHOLD)
             printf("Possible event at %f seconds. \n", time_incr*k);
    }
    /*  read data file.  */
    fclose(file_ptr);
return EXIT_SUCCESS;
    
}
/*-----------------------------------------------------*/
/*  This function computes the average power in a  */
/*  specified window of a double array.            */

double power_w(double *ptr; int n)
{
  int k;
  double xsquare=0;
  
  /*  Compute sum of values squared in tha array x. */
  for (k=0; k <= n-1; k++)
  {
      xsquare += (*(ptr - k)) * (*(ptr - k));    
  }
  /*  Return the average squared value.*/
  return xsquare/n;
}
/*-----------------------------------------------------*/

