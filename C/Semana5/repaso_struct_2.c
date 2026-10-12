#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    char b,c;
    //struct agenda alumno, profesor;
    
    struct agenda
    {
       char nombre[30];
       int edad;        
            
    }alumno, profesor;
    
    alumno.nombre[0] = '\0';
    
    alumno.nombre[] = "Frank López";
    alumno.edad = 22;
    
    //scanf("%s", &alumno.nombre);
    //scanf("%i", &%alumno.edad);
    
    prinf("%s", alumno.nombre);
    prinf("%i", alumno.edad);
    
    
    
 return EXIT_SUCCESS;   
}
