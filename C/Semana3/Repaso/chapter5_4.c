/*------------------------------------------------*/
/*  Program chapter5_4                            */
/*                                                */
/*  This program computes power averages          */
/*  over a 10-week period.                        */
/*                                                */
/*
  Name: chapter5_4
  Copyright: 1995 by Prentice-Hall, Inc.
  Author: Delores M. Etter
  Date: 09/08/23 01:59
  Description: page 234; Engineering Problem Solving with ANSI C Fundamental
  Concepts; Alan R. Apt Book.
*/

/*Status Incomplete*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define NROWS 10
#define NCOLS 7
#define FILENAME "sensor2.dat"

int main()
{
    /*  Declare and initialize variables. */
    int i, j;
    double power[], col_sum;
    FILE *data1;
    
    /*  Open file and read first data points.  */
    sensor2 = fopen(FILENAME, "r");
    fscanf(sensor2, "%lf %lf", &time, &motion);
    
    /*  Initialize variables using first data point.  */
    min = max = motion;
    
    printf("time  \t\t|\tmotion\t|\n");
    /*  Update summary data until trailer record read.  */
    do
    {
         sum += motion;
         if(motion > max)
            max = motion;
         if (motion < min)
            min = motion;
         num_data_pts++;
         fscanf(sensor2, "%lf %lf", &time, &motion);
         printf("%lf\t  | \t%lf|\n", time, motion);
    }while(time<=1000);

    printf("\n-----------------------\n");
    /*  Print summary information.  */
    printf("Number of sensor readings: %i \n",
           num_data_pts );
    printf("Average reading:      %.2f \n",
           sum/num_data_pts);
    printf("Maximum reading:      %.2f \n",
           max);
    printf("Minimum reading:      %.2f \n",
           min);
    printf("\n-----------------------\n");
    /*  Close file and exit program.  */     
    fclose(sensor2); 
    sleep(10000);
    return EXIT_SUCCESS; 
    
}
