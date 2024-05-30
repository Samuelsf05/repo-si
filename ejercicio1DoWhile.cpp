#include <iostream>

 using namespace std;
 int main(){

    int numero=0, pares=0, impares=0;

    do{
        
    cout << "Ingrese un numero (0 para salir): \n";
    cin >> numero;

        if((numero%2 == 0) && (numero != 0)){
            pares++;
        }else{

            impares++;
        }

    } while(numero!=0);

    cout << "Cantidad de numeros pares: " << pares << "\n";
    cout << "Cantidad de numeros impares: " << impares << "\n";

    return 0;
 }