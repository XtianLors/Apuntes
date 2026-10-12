#include <stdio.h>
#define FILENAME "sensor1.dat"

int main()
{
//each data file used in a program must have a file pointer associated with it.
 FILE *sensor1; //FILE declaration defines a file pointer 
 FILE *balloon;
 
 sensor1 = fopen(FILENAME, "r");// fopen function obtains the information necessary to 
 //assign a file pointer to a specific file.
  // we can acces the information of sensor1.dat with fscanf();
  // we can write to the file as follows:
 balloon = fopen("balloon.dat", "w");
 fprintf(balloon, "%f %f %f\n",time, height,
                  velocity);
//identifiers associated to 


 fclose(sensor1);
 fclose(balloon);

 return EXIT_SUCCESS;
    
}
