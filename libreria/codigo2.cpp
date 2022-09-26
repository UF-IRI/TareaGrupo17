//¿Que hace? Multiplica 2 numeros
#include "codigo2.h" 

int codigo2()
{
    int num1, num2;
    int *p = NULL;
    int *q = NULL;
    
    cout<< "ingrese el primer numero a multiplicar: "<<endl;
    cin>> num1;
    p=&num1;
        
    cout<< "ingrese el segundo numero a multiplicar: "<<endl;
    cin>> num2;
    q=&num2;
      
    cout<< *p << "*" << *q << "=" << (*p)*(*q) << endl;
    
    return (*p)*(*q);
    
}