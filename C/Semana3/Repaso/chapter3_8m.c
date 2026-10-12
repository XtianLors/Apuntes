/*------------------------------------------------*/
/*  Program chapter3_8m                           */
/*                                                */
/*  This program grenerates a summary report from */
/*  a data file that has a trailer record with    */
/*  weird values.                                 */
/*
  Name: chapter3_8
  Copyright: 1995 by Prentice-Hall, Inc.
  Author: Delores M. Etter
  Date: 07/08/23 22:34
  Description: page 129; Engineering Problem Solving with ANSI C Fundamental
  Concepts; Alan R. Apt Book.
*/



#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define FILENAME "balloon.dat"

int main()
{
    /*  Declare and initialize variables. */
    int round_f;
    double initial, increment, final, time, height, velocity,
           max_time=0, max_height=0;
    FILE *balloon;
    
    /*  Open output file.  */
    balloon = fopen(FILENAME, "w");
    
    /*  Get user input  */
    printf("Enter initial value for table (in hours) \n");
    scanf("%lf", &initial);
    printf("Enter increment between lines (in hours) \n");
    scanf("%lf", &increment);
    printf("Enter final value for table (in hours) \n");
    scanf("%lf", &final);
    round_f = (int)final;
    fprintf(balloon, "%d", round_f);
    /*  Print report heading.  */
   printf("\n\nWeather Balloon Information \n");
   printf("Time   Height  Velocity\n");
   printf("(hrs) (meters)  (meters/s)\n");
    
    /*  Compute and print report information  */
    /*  and write data to a file.             */
    for(time = initial; time <= final; time += increment)
    {
       height = -0.12*pow(time, 4) + 12*pow(time, 3) - 380*time*time +
                 4100*time + 220;    
       velocity = -0.48*pow(time, 3) + 36*time*time
                 - 760*time + 4100;
       printf("%6.2f  %8.2f  %7.2f \n", 
              time, height, velocity/3600 ); 
       fprintf(balloon, "%.2f  %.2f  %.2f \n",
               time, height, velocity/3600 );
       
       if(height > max_height)
       {
           max_height = height;
           max_time = time;
           
       }
    }
    /*  Print maximum height and corresponding time.  */     
    printf("\nMaximum balloon height was %8.2f meters \n ",
           max_height);
    printf("and it ocurred at %6.2f hours \n ",
           max_time);
    fclose(balloon);
    sleep(10000);
    return EXIT_SUCCESS; 
    
}
