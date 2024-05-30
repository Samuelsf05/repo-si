#include <iostream>

 using namespace std;
 int main(){

    int menu=0, edad[]={}, indiceUsuario=0;
    string nombre[100]={}, usuario[100]={}, contrasenas[100]={};
    string usuarioTemporal = ""; 
    string contrasenaTemporal = "";
    bool inicioSesion = false, seguir = true;

    do{

    cout << "         Menu de inicio de sesion.        \n";
    cout << "1. Inicio de sesion. \n 2. Registro. \n 3. Salir. \n";
    cin >> menu;

    switch(menu){

        case 1:

        cout << "Ingrese nombre de usuario: \n";
        cin >> usuarioTemporal;
        for(int i=0; i<100; i++){
            if(usuarioTemporal == usuario[i]){

                do{
                cout << "Ingrese su contraseña: \n";
                cin >> contrasenaTemporal;
                if(contrasenaTemporal == contrasenas[i]){
                    inicioSesion = true;
                    break;
                }else{
                    cout<<"Contrasena incorrecta \n";
                }
                }while(true);
            }
        }

        if(inicioSesion==false){
            cout << "Usuario no existe. \n";
        }

        if(inicioSesion==true){
            cout << "Bienvenido!! \n";
        }

        break;

        case 2:

        cout << "Ingrese nombre completo: \n";
        cin >> nombre[indiceUsuario];
        cout << "Ingrese Edad: \n";
        cin >> edad[indiceUsuario];
        cout << "Ingrese el nombre de usuario: \n";
        cin >> usuario[indiceUsuario];
        cout << "Ingrese una contraseña: \n";
        cin >> contrasenas[indiceUsuario];

        break;

        case 3:
        seguir=flase;
        break;

        default:
        cout << "Opcion no valida. \n";
        break;
    }
    }while(true);

    return 0;
 }