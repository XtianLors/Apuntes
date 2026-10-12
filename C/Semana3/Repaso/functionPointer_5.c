#include <stdio.h>

void fun(int a)
{
     printf("Value of a is: %d\n", a);
     
}

double foo(double c)
{
    int i;
    double omega;
    double g[10]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //g[10] ;
    
    for(i = 0; i <= 9; i++)
    {
    omega +=  c * g[i];
    }
    printf("%lf", omega);
    //return omega;
}
     
int main()
{
 //Declaring a variable of type void
 void (*fun_ptr)(int) = &fun;
 double (*fun_mult) (double) = &foo;
 //double result;
 
 /*
 void (*fun_ptr)(int);
 fun_ptr = &fun;
 */
 
 //
 (*fun_ptr)(10);
 (*foo)(11.0);
 //printf("%lf", result);
 getchar();
 return 0;    
}

/*
https://www.programiz.com/c-programming/c-arrays
https://www.programiz.com/c-programming/c-pointer-functions
https://stackoverflow.com/questions/840501/how-do-function-pointers-in-c-work
https://www.prodevelopertutorial.com/advanced-c-pointer-programming-chapter-8-pointers-and-functions/
https://www.geeksforgeeks.org/function-pointer-in-c/
https://www.geeksforgeeks.org/c-pointer-to-pointer-double-pointer/
https://www.geeksforgeeks.org/what-is-a-pointer-to-a-null-pointer/
https://www.geeksforgeeks.org/difference-between-dangling-pointer-and-void-pointer/
https://www.geeksforgeeks.org/how-to-return-a-pointer-from-a-function-in-c/
https://en.wikipedia.org/wiki/C_data_types
https://gcc.gnu.org/onlinedocs/gcc/Variable-Length.html
https://gcc.gnu.org/onlinedocs/gcc/index.html
https://stackoverflow.com/questions/17771484/what-is-a-parameter-forward-declaration
https://www.programiz.com/c-programming/c-pointer-examples#:~:text=Array%20and%20Pointer%20Examples%20Calculate%20the%20average%20of,Find%20transpose%20of%20a%20matrix%20Multiply%20two%20matrices
https://youtu.be/N9-FbTtFwH4
https://www.w3schools.com/c/c_pointers_arrays.php
https://stackoverflow.com/questions/26138259/how-to-get-r-output-into-csv-file#:~:text=Now%20you%20can%20write%20data%20%3A%20write.table%20%28data%2C,csv%20file%20into%20that%20location%20you%20defined%20accordingly.
https://stackoverflow.com/questions/21858412/c-pointers-and-arrays-warning-assignment-makes-pointer-from-integer-without-a

*/
