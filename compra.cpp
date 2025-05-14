#include <iostream>
using namespace std;


int main(){

    float saldo = 1000, restante = 0, precioBasica = 900, table= 600,Chromebook=700, laptop=1500,Tablet=1200, estacion= 2000;
    int edad = 0, categoria = 0 ,categoriaEstudiante = 0 ,categoriaProfesional = 0;

    //Mensaje de bienvenida al usuario al programa 
    cout <<" Bienvenido porfavor proposiciones su edad para poder continuar :D : " <<"\n";
    cin >> edad;

    //Verificacion de edad del usuario
    if(edad <= 16){
    cout <<" No tiene la suficiente edad para poder comprar lo sentimos" <<"\n";
    }
    //Entrada al menu de los usuarios para poder seguir la ejecucion del programa 
    else if(edad >= 16){
        cout << "Bienvenido al apartado de para elegir a continuacion se le mostrara los usuarios disponibles" <<"\n";

         //Menu de Principal para todos los niveles de usuario
        cout<< "-------------Menu-------------" << "\n";
        cout << "1.Estudiante" << "\n";
        cout <<"2.Profesional" << "\n";
        cout <<"3.Ver todo" << "\n";
        cout <<"4.Salir" << "\n";
        cout <<"---------------------------------" <<"\n";

        //Mensaje de bienvenida para escoger un usuario
        cout <<"Porfavor seleccione una opcion del menu de usuario: " <<"\n";
        cin >> categoria;

        switch (categoria)
        {
        case 1:
        //Menu de estudiante
        cout<< "-------------Menu Estudiante----------------" << "\n";
        cout << "1.Laptop Básica: $900" << "\n";
        cout <<"2.Tablet Estudiantil: $600" << "\n";
        cout <<"3.Chromebook: $700" << "\n";
        cout <<"4.Salir" << "\n";
        cout <<"---------------------------------" <<"\n";

        //Mensaje para escoger una opcion del menu
        cout <<"Porfavor seleccione una opcion para comprar: " <<"\n";
        cin >> categoriaEstudiante;

        switch (categoriaEstudiante)
        {
           
        case 1:
         //compra de laptop y verificacion de saldo disponible
            cout <<"Usted ha Seleccionado la Laptop Basica se verificara si tiene saldo suficiente..... " <<"\n";

            if(precioBasica > saldo){
            cout <<"No tiene suficiente fondo ahorre mas xd"  <<"\n";
            }
            else
            {
            cout <<"Compra exitosa de Laptop Basica. Buen dia"  <<"\n";
            cout <<"Su saldo actual es de: " << restante <<"\n";
            restante = saldo - 900 / 20;
            }
            
            break;
        case 2:
        //compra de Tablet y verificacion de saldo disponible
        cout <<"Usted ha  Seleccionado la Tablet Estudiantil se verificara si tiene saldo suficiente..... "  <<"\n";

            if(table > saldo){
            cout <<"No tiene suficiente fondo ahorre mas xd"  <<"\n";
            }
            else
            {
            cout <<"Compra exitosa de la Tablet Estudiantil. Buen dia"  <<"\n";
            cout <<"Su saldo actual es de: " << restante <<"\n";
            restante = saldo - 600 / 20;
            }
        break;
        case 3:
         //compra de Chromebook
        cout <<"Usted ha  Seleccionado la  Chromebook se verificara si tiene saldo suficiente..... "  <<"\n";
        if(Chromebook > saldo){
            cout <<"No tiene suficiente fondo ahorre mas xd"  <<"\n";
            }
            else
            {
            cout <<"Compra exitosa de la Chromebook . Buen dia"  <<"\n";
            cout <<"Su saldo actual es de: " << restante <<"\n";
            restante = saldo - 700 / 20;
            }

        break;
        case 4:
        //Mensaje de despedida 
        cout <<"Gracias por usar nuestro programa vuelva pronto :D "  <<"\n";
        break;
        default:
        //Mensajee en caso de haber activado una opcion no valida
        cout <<"Error Porfavor vuelva intentarlo mas tarde "  <<"\n";
        break;
        }

        break;

        case 2:
        //Menu de Profesionales
        cout<< "-------------Menu Profesionales---------------" << "\n";
        cout <<"1. Laptop Avanzada: $1500 " << "\n";
        cout <<"2.Tablet Pro: $1200 " << "\n";
        cout <<"3. Estación de Trabajo: $2000" << "\n";
        cout <<"4.Salir" << "\n";
        cout <<"---------------------------------" <<"\n";

        //Mensaje para escoger una opcion del menu
        cout <<"Porfavor seleccione una opcion para comprar: " <<"\n";
        cin >> categoriaProfesional;

        switch (categoriaProfesional)
        {
           
        case 1:
       
          //Compra de Estación de Trabajo y verificacion de saldo disponible
          cout <<"Usted ha Seleccionado la Laptop Avanzada se verificara si tiene saldo suficiente..... " <<"\n";

          if(laptop > saldo){
          cout <<"No tiene suficiente fondo ahorre mas xd"  <<"\n";
          }
          else
          {
          cout <<"Compra exitosa de la Laptop Avanzada. Buen dia"  <<"\n";
          cout <<"Su saldo actual es de: " << restante <<"\n";
          restante = saldo - 1500 / 20;
          }
        break;
        case 2:
        //Compra de Tablet Pro y verificacion de saldo disponible
        cout <<"Usted ha  Seleccionado la Tablet Pro se verificara si tiene saldo suficiente..... " <<"\n";

        // Se verifica si hay saldo disponible 
        if(Tablet > saldo){
            //En caso que no haya saldo disponible
        cout <<"No tiene suficiente fondo ahorre mas xd"  <<"\n";
        }
        else
        {
        //En caso que tenga saldo disponible
        cout <<"Compra exitosa de la Tablet Pro .Buen dia"  <<"\n";
        cout <<"Su saldo actual es de: " << restante <<"\n";
        restante = saldo - 1200 / 20;
        }
        break;
        case 3:
         //Compra de Tablet Pro y verificacion de saldo disponible
         cout <<"Usted ha  Seleccionado la Tablet Pro se verificara si tiene saldo suficiente..... " <<"\n";

         // Se verifica si hay saldo disponible 
         if(estacion > saldo){
             //En caso que no haya saldo disponible
         cout <<"No tiene suficiente fondo ahorre mas xd"  <<"\n";
         }
         else
         {
         //En caso que tenga saldo disponible
         cout <<"Compra exitos de la Estación de trabajo. Buen dia"  <<"\n";
         cout <<"Su saldo actual es de: " << restante <<"\n";
         restante = saldo - 2000 / 20;
         }
        break;
        case 4:
        //Mensaje de despedida 
        cout <<"Gracias por usar nuestro programa vuelva pronto :D "  <<"\n";
        break;
        default:
        //Mensajee en caso de haber activado una opcion no valida
        cout <<"Error Porfavor vuelva intentarlo mas tarde "  <<"\n";
        break;
        }
        break;

        case 3:
       //Menu de completo
       cout<< "-------------Menu completo---------------" << "\n";
       cout <<"1. Laptop Avanzada: $1500 " << "\n";
       cout <<"2.Tablet Pro: $1200 " << "\n";
       cout <<"3. Estación de Trabajo: $2000" << "\n";
       cout <<"4.Laptop Básica: $900" << "\n";
        cout <<"5.Tablet Estudiantil: $600" << "\n";
        cout <<"6.Chromebook: $700" << "\n";
       cout <<"7.Salir" << "\n";
       cout <<"---------------------------------" <<"\n";  
       break;

        default:
        cout <<"Error Porfavor vuelva intentarlo mas tarde "  <<"\n";
        break;
        }

    }

    else{
        cout << "Error al ingresar la edad intente nuevamente" <<"\n";
    }

}