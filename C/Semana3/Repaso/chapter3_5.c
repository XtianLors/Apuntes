/*------------------------------------------------*/
/*  Program chapter3_5                            */
/*                                                */
/*  This program grenerates a summary report from */
/*  a data file that has the number of data points*/
/*  in the first record.                          */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define FILENAME "sensor1.dat"

int main()
{
    /*  Declare and initialize variables. */
    int num_data_pts, k;
    double time, motion, sum=0, max, min;
    FILE *sensor1;
    
    /*  Open file and read the number of data points.  */
    sensor1 = fopen(FILENAME, "r");
    fscanf(sensor1, "%i", &num_data_pts);
    
    /*  Read data and compute summary information.  */
    for(k=1; k<=num_data_pts; k++)
    {
         fscanf(sensor1, "%lf %lf", &time, &motion);
         if(k == 1)
            max = min = motion;
            sum += motion;
         if (motion > max)
            max = motion;
         if (motion < min)
            min = motion;
    }
    
    /*  Print summary information.  */
    printf("Number of sensor readings: %i \n",
           num_data_pts );
    printf("Average reading:      %.2f \n",
           sum/num_data_pts);
    printf("Maximum reading:      %.2f \n",
           max);
    printf("Minimum reading:      %.2f \n",
           min);
    /*  Close file and exit program.  */     
    fclose(sensor1); 
    sleep(10000);
    return EXIT_SUCCESS; 
    
}
