#include <iostream>

 using namespace std;
 int main(){

    int numero=0, indicePar=0, indiceImpar=0, pares[100] = {}, impares[100] = {};

    do{
        
    cout << "Ingrese un numero (0 para salir): \n";
    cin >> numero;

        if((numero%2 == 0) && (numero != 0)){

            pares[indicePar] = numero;
            indicePar++;
        }else{

            impares[indiceImpar] = numero;
            indiceImpar++;
        }

    } while(numero!=0);

    cout << "Cantidad de numeros pares: " << indicePar << "\n";
    cout << "Cantidad de numeros impares: " << indiceImpar << "\n";

    for(int i = 0; i<=indicePar; i++){

        cout << pares[i]<<" ";
    }

    cout << "\n";

    for(int j = 0; j<=indiceImpar; j++){

        cout << impares[j]<< " ";
    }

    return 0;
 }