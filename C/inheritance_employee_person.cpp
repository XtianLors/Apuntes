
#include <iostream>
using std::string;

//Define una clase base “Persona” con los atributos generales de una persona. 
      //Identifica por lo menos 3 atributos para la clase.

class Persona
{
      private:
            string Salud;
            bool Trabajo;
            string Perfil;
              
      public:
             string Personalidad;
             string Nombre;
             string Apellido;
             int Edad;
             
             Persona(string nombre, string apellido, int edad, string salud,  bool trabajo, string perfil, string personalidad)
             {
                Nombre = nombre;
                Apellido = apellido;
                Edad = edad;
                Salud = salud;
                Trabajo = trabajo;
                Perfil = perfil;
                Personalidad = personalidad;
             }
             
             void setSalud(string salud)
             {
                Salud = salud;
             }
             string getSalud()
             {
                return Salud;
             }
             
             void setTrabajo(bool trabajo)
             {
                Trabajo = trabajo;
             }
             bool getTrabajo()
             {
                return Trabajo;
             }
             
             void setPerfil(string perfil)
             {
                Perfil = perfil;
             }
             string getPerfil()
             {
                return Perfil;
             }
             
             void preseentatePersona()
             {
                std::cout << "Inicialización exitosa: \n"  << std::endl;
                std::cout << Nombre << "\n" << std::endl;
                std::cout << Apellido << "\n" << std::endl;
                std::cout << Edad << "\n" << std::endl;
                std::cout << getSalud() << "\n" << std::endl;
                std::cout << getTrabajo() << "\n" << std::endl;
                std::cout << getPerfil() << "\n" << std::endl;
                std::cout << Personalidad << "\n" << std::endl;                   
             }
             
             void definirPersona()
             {
               int edad;
               string nombre, apellido, salud, perfil, personalidad;
               bool trabajo;
                
                std::cout << "Nombre de la Persona, debe ser cadena de texto.\nInput: " << std::endl;
                std::cin >> nombre;
                Nombre = nombre;
                std::cout << "Apellido de la Persona, debe ser cadena de texto.\nInput: " << std::endl;
                std::cin >> apellido;
                Apellido = apellido;
                std::cout << "Edad de la Persona, debe ser un numero natural.\nInput: " << std::endl;
                std::cin >> edad;
                Edad = edad;
                std::cout << "Defina la salud, debe ser cadena de texto.\nInput: " << std::endl;
                std::cin >> salud;
                setSalud(salud);
                std::cout << "¿Trabaja?, debe ser 1 o 0.\nInput: " << std::endl;
                std::cin >> trabajo;
                setTrabajo(trabajo);
                std::cout << "Defina el perfil, debe ser cadena de texto.\nInput: " << std::endl;
                std::cin >> perfil;
                setPerfil(perfil);
                std::cout << "Defina la personalidad, debe ser cadena de texto.\nInput: " << std::endl;
                std::cin >> personalidad;
                Personalidad = personalidad;
                
                std::cout << "--------------\n"  << std::endl;
                std::cout << "Cambio: \n"  << std::endl;
                std::cout << Nombre << ".\n" << std::endl;
                std::cout << Apellido << ".\n" << std::endl;
                std::cout << getSalud() << ".\n" << std::endl;
                std::cout << getTrabajo() << ".\n" << std::endl;
                std::cout << getPerfil() << ".\n" << std::endl;
                std::cout << Personalidad << ".\n" << std::endl;
             }
             virtual void trabajando()
             {
                std::cout << "Hola, estoy trabajando." << std::endl;
                  
             }
};             

class Cliente : public Persona
{
      private:
         string Direccioon;
         
      public:
         double compraPromedio;
         string Sucursal;
         string artFav;
         string Empleo;
         
         Cliente(string nombre, string apellido, int edad, string salud,  
         bool trabajo, string perfil, string personalidad,
         double comprapromedio, string sucursal, string artfav, string empleo, string direccioon)
         :Persona(nombre, apellido, edad, salud, trabajo, perfil, personalidad)
         {
             compraPromedio = comprapromedio;
             Sucursal = sucursal;
             artFav = artfav;
             Empleo = empleo;
             Direccioon = direccioon;
         }
         
         void setDireccioon(string direccioon)
         {
             Direccioon = direccioon;
         }
         string getDireccioon()
         {
             return Direccioon;
         }
             
         void preseentateCliente()
         {
             std::cout << "Inicialización exitosa: \n"  << std::endl;
             std::cout << Nombre << "\n" << std::endl;
             std::cout << Apellido << "\n" << std::endl;
             std::cout << Sucursal << "\n" << std::endl;
             std::cout << artFav << "\n" << std::endl;
             std::cout << Empleo << "\n" << std::endl;
             std::cout << getDireccioon() << "\n" << std::endl;              
         }
         
         void definirCliente()
             {
               string sucursal, artfav, empleo, direccioon;
               double comprapromedio;
                
                std::cout << "Compra promedio del cliente, debe ser cadena de texto.\nInput: " << std::endl;
                std::cin >> comprapromedio;
                compraPromedio = comprapromedio;
                std::cout << "Sucursal del cliente, debe ser cadena de texto.\nInput: " << std::endl;
                std::cin >> sucursal;
                Sucursal = sucursal;
                std::cout << "Artículo favorito del cliente, debe ser cadena de texto.\nInput: " << std::endl;
                std::cin >> artfav;
                artFav = artfav;
                std::cout << "Empleo del cliente, debe ser cadena de texto.\nInput: " << std::endl;
                std::cin >> empleo;
                Empleo = empleo;
                std::cout << "Defina la dirección, debe ser cadena de texto.\nInput: " << std::endl;
                std::cin >> direccioon;
                setDireccioon(direccioon);
                
                std::cout << "--------------\n"  << std::endl;
                std::cout << "Cambio: \n"  << std::endl;
                std::cout << Nombre << ".\n" << std::endl;
                std::cout << Apellido << ".\n" << std::endl;
                std::cout << compraPromedio << ".\n" << std::endl;
                std::cout << Sucursal << ".\n" << std::endl;
                std::cout << artFav << ".\n" << std::endl;
                std::cout << Empleo << ".\n" << std::endl;
                std::cout << getDireccioon() << ".\n" << std::endl;
             }
         
             void trabajando()
             {
                std::cout << "Saludos, quisiera comparar precios y hacer una compra." << compraPromedio << std::endl;
                  
             }
};

class Empleado : public Persona
{
      private:
         double Salario;
         double Eficiencia;
         string blandasHabs;
         string historialEmpresarial;
         
      public:
         string contraFecha;
         string Puesto;
         
         Empleado(string nombre, string apellido, int edad, string salud,  
         bool trabajo, string perfil, string personalidad,
         double salario, double eficiencia, string blandashabs, string historialempresarial ,string contrafecha, string puesto)
         :Persona(nombre, apellido, edad, salud, trabajo, perfil, personalidad)
         {
             Salario = salario;
             Eficiencia = eficiencia;
             blandasHabs = blandashabs;
             historialEmpresarial = historialempresarial;
             contraFecha = contrafecha;
             Puesto = puesto;
         }
         
         void setSalario(double salario)
         {
             Salario = salario;
         }
         double getSalario()
         {
             return Salario;
         }
         void setEficiencia(double eficiencia)
         {
             Eficiencia = eficiencia;
         }
         double getEficiencia()
         {
             return Eficiencia;
         }
         void setblandasHabs(string blandashabs)
         {
             blandasHabs = blandashabs;
         }
         string getblandasHabs()
         {
             return blandasHabs;
         }
         void sethistorialEmpresarial(string historialempresarial)
         {
             historialEmpresarial = historialempresarial;
         }
         string gethistorialEmpresarial()
         {
             return historialEmpresarial;
         }
         
         void preseentateCliente()
         {
             std::cout << "Inicialización exitosa: \n"  << std::endl;
             std::cout << Nombre << "\n" << std::endl;
             std::cout << Apellido << "\n" << std::endl;
             std::cout << getSalario() << "\n" << std::endl;
             std::cout << getEficiencia() << "\n" << std::endl;
             std::cout << getblandasHabs() << "\n" << std::endl;
             std::cout << gethistorialEmpresarial() << "\n" << std::endl;
             std::cout << contraFecha << "\n" << std::endl;
             std::cout << Puesto << "\n" << std::endl;
         }
         
         void definirEmpleado()
             {
               string puesto, blandashabs, historialempresarial, contrafecha;
               double salario, eficiencia;
                
                std::cout << "Salario promedio del empleado, debe ser numérico.\nInput: " << std::endl;
                std::cin >> salario;
                setSalario(salario);
                std::cout << "Eficiencia del empleado, debe ser numérico.\nInput: " << std::endl;
                std::cin >> eficiencia;
                setEficiencia(eficiencia);
                std::cout << "Defina la fecha de contratación, debe ser cadena de texto.\nInput: " << std::endl;
                std::cin >> contrafecha;
                contraFecha = contrafecha;
                std::cout << "Habilidades blandas del empleado, debe ser cadena de texto.\nInput: " << std::endl;
                std::cin >> blandashabs;
                setblandasHabs(blandashabs);
                std::cout << "Puesto del empleado, debe ser cadena de texto.\nInput: " << std::endl;
                std::cin >> puesto;
                Puesto = puesto;
                std::cout << "Defina el historial empresarial, debe ser cadena de texto.\nInput: " << std::endl;
                std::cin >> historialempresarial;
                sethistorialEmpresarial(historialempresarial);
                
                std::cout << "--------------\n"  << std::endl;
                std::cout << "Cambio: \n"  << std::endl;
                std::cout << Nombre << ".\n" << std::endl;
                std::cout << Apellido << ".\n" << std::endl;
                std::cout << getSalario() << ".\n" << std::endl;
                std::cout << getEficiencia() << ".\n" << std::endl;
                std::cout << gethistorialEmpresarial() << ".\n" << std::endl;
                std::cout << getblandasHabs() << ".\n" << std::endl;
                std::cout << contraFecha << ".\n" << std::endl;
                std::cout << Puesto << ".\n" << std::endl;
             }   
             
             void trabajando()
             {
                std::cout << "Hola, estoy trabajando." << gethistorialEmpresarial() << std::endl;
                  
             }
};

int main()
{
    //Resultados del cliente

    Cliente cliente001 = Cliente("Javier", "Francmazon", 101, "Saludable", 0, "Coherente", "Alegre",
                       1333.23, "Iztapalapa 001", "Yakult", "Gobierno", "Aldama no. 63, Col. Barrio San Lucas, C.P. 09000, Alcaldía Iztapalapa");
    cliente001.preseentatePersona();
    
    
    std::cout << "\n" << std::endl;
    cliente001.preseentateCliente();
    
    //cliente001.definirPersona();

    std::cout << "\n" << std::endl;
    Empleado empleado001 = Empleado("Javier", "Francmazon", 101, "Saludable", 0, "Coherente", "Alegre",
    33000.00, 0.93, "Media", "Trek", "1994-21-03", "Gerente");
    empleado001.preseentateCliente();
    
    Persona *e2 = &cliente001;
    Persona *e1 = &empleado001;

    e1 -> trabajando();
    e2 -> trabajando();
    
    return 0;
}
