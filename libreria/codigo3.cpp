//¿Que hace? ingrese a y b para que sumen 8
#include "codigo3.h" 

int codigo3()
{
    int num1, num2, suma;
    cout<< "ingrese 2 numeros que al su suma equivalga a  8..." <<endl;
    cout<< "ingrese su primer numero para sumar: " <<endl;
    cin>> num1;
    cout<< "ingrese su segundo numero para sumar: " <<endl;
    cin>> num2; 
    suma = num1+num2;
    if(suma==8)
        {
            cout<< "Lo lograste!! La suma es = " << suma <<endl;
            return 0; //pasa el test porque la suma es 8
        }
    else
        {
            cout<<"la suma no es igual a 8, suma = " <<suma << endl << " tenes que practicar un poco mas ://" <<endl;
            return suma; // el test va a fallar pq no sumo 8
        }
}