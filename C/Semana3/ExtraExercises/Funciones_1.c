
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    
    //Declare variables and function prototypes.
    int k;
    double a, b, x_incr, new_x;
    double sinc(double x);
    
    //Ask for the interval endpoints
    printf("Enter endpoints a and b (a<b): \n");
    scanf("%lf %lf", &a, &b);
    x_incr = (a-b)/20;
    
    //Compute and print table of sinc(x) values.
    printf("x and sinc(x) \n");
    for (k=0; k <= 20; k++){
        new_x = a + k*x_incr;
        printf("%f %f \n", new_x, sinc(new_x));
        }
    
 return EXIT_SUCCESS;   
    
}
