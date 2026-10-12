

// Estructura o registro es un tipo de dato estructurado que agrupa,
// una o más variables, ya sea de un solo tipo o de diferentes tipos de datos,
// y además estos pueden ser a su vez datos simples o estructurados.

/*
struct identificador_estructura
{
  Tipo_dato identificador_campo1;
  Tipo_dato identificador_campo2;     
       
       
};
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    char b,c;
    
    struct agenda
    {
       char nombre[30];
       int edad;        
            
            
    };//alumno, profesor;
    
    struct agenda alumno;//, profesor;
    
    alumno.nombre = "Frank López";
    alumno.edad = 22;
    
    //scanf("%s", &alumno.nombre);
    //scanf("%i", &%alumno.edad);
    
    prinf("%s", alumno.nombre);
    prinf("%i", alumno.edad);
    
    
    
 return EXIT_SUCCESS;   
}
