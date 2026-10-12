/*------------------------------------------------*/
/*  Proyecto 3                                    */
/*                                                */
/*------------------------------------------------*/
#include <stdio.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_ORANGE  "\x1b[5m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_PINK    "\x1b[89m"
#define ANSI_COLOR_RESET   "\x1b[0m"
#define MAX_SIZE 100

struct Person {
    
    int id;
    char name[50];
    char fatherSurname[50];
    char motherSurname[50];
    char collegeEducation[100];
    char email[100];
    char phoneNumber[15];
};



int opcioon;
//char matriicula[], nombre[], apellidoP[], apellidoM[], carrera[], correoE[], telefono[];

int main(int argc, char const *argv[]){
    
     struct Person people[argc];
    
do
{
  printf(ANSI_COLOR_RED     "__________________________\n"     ANSI_COLOR_RESET "\n");
  printf(ANSI_COLOR_RED     "\t\t\tMenú de opciones\n"     ANSI_COLOR_RESET "\n");
  printf(ANSI_COLOR_RED     "__________________________\n"     ANSI_COLOR_RESET "\n");
  printf(ANSI_COLOR_GREEN     "\t1. Alta de estudiantes\n"     ANSI_COLOR_RESET "\n");
  printf(ANSI_COLOR_ORANGE    "\t2. Baja de estudiantes\n"     ANSI_COLOR_RESET "\n");
  printf(ANSI_COLOR_MAGENTA     "\t3. Modificaciones de estudiantes\n"     ANSI_COLOR_RESET "\n");
  printf(ANSI_COLOR_CYAN     "\t4. Búsquedas de estudiantes\n"     ANSI_COLOR_RESET "\n");
  printf(ANSI_COLOR_PINK     "\t5. Salir\n"     ANSI_COLOR_RESET "\n");
  printf(ANSI_COLOR_RED     "__________________________\n"     ANSI_COLOR_RESET "\n");

  printf("Porfavor elige una opción: ");
  scanf("%d", &opcioon);
  
  if(opcioon != EOF){
    switch(opcioon){
      case 1:
        printf(ANSI_COLOR_RED     "__________________________\n"     ANSI_COLOR_RESET "\n");
        printf(ANSI_COLOR_RED     "\t\t\tFICHA DE INGRESO\n"     ANSI_COLOR_RESET "\n");
        printf(ANSI_COLOR_RED     "__________________________\n"     ANSI_COLOR_RESET "\n");
        printf("Ingrese la matrícula: \n");
        scanf("%d", &person.id);
        printf("Ingrese el nombre: \n");
        scanf(" %[^\n]", person.name);
        printf("Ingrese el apellido paterno:\n");
        scanf(" %[^\n]", person.fatherSurname);
        printf("Ingrese el apellido materno:\n");
        scanf(" %[^\n]", person.motherSurname);
        printf("Ingrese la carrer:\n");
        scanf(" %[^\n]", person.collegeEducation);
        printf("Ingrese el correo electrónico:");
        scanf(" %[^\n]", person.email);
        printf("Ingrese el teléfono:\n");
        scanf(" %[^\n]", person.phoneNumber);
        printf("Porfavor elige una opción: ");
        scanf("%d", &opcioon);
        printf("Búsqueda de Estudiante: ");
        scanf("%d", &opcioon);
        break;

      case 2:
        printf(ANSI_COLOR_RED     "__________________________\n"     ANSI_COLOR_RESET "\n");
        printf(ANSI_COLOR_RED     "\t\t\tFICHA DE BAJA\n"     ANSI_COLOR_RESET "\n");
        printf(ANSI_COLOR_RED     "__________________________\n"     ANSI_COLOR_RESET "\n");
        scanf("%d", &opcioon);
        break;

      case 3:
        printf(ANSI_COLOR_RED     "__________________________\n"     ANSI_COLOR_RESET "\n");
        printf(ANSI_COLOR_RED     "\t\t\tMODIFICACIÓN DE ESTUDIANTE\n"     ANSI_COLOR_RESET "\n");
        printf(ANSI_COLOR_RED     "__________________________\n"     ANSI_COLOR_RESET "\n");
        printf("Ingrese la matrícula: \n");
        scanf("Modificar estudiante: ", &opcioon);
        break;
      
      case 4:
        printf(ANSI_COLOR_RED     "__________________________\n"     ANSI_COLOR_RESET "\n");
        printf(ANSI_COLOR_RED     "\t\t\tBÚSQUEDA DE ESTUDIANTE\n"     ANSI_COLOR_RESET "\n");
        printf(ANSI_COLOR_RED     "__________________________\n"     ANSI_COLOR_RESET "\n");
        printf("Ingrese la matrícula: \n");
        printf("Porfavor elige una opción: ");
        scanf("%d", &opcioon);
        break;

      case 5:
        break;
      
      default:
        printf("Si desea salir introduzca 5.");
      }
      
  }else{
    break;    
  }
  
}while(opcioon != 5); 

return 0;

}
