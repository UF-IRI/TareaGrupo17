//¿Que hace? Juego de adivinar el número!
#include "codigo2.h" 

int codigo2()
{
    int tries, correct, guess;
    bool again = false;
    int *p = NULL;
    int i;
    
    do
    {
      std:: cout<< "ingrese el numero que quiere que el resto adivine: "<<endl;
      std:: cin>> correct;
       
       do
       {
        std:: cout<< "ingrese la cantidad de intentos que quiere tener para adivinar el numero: "<<endl;
        cin>> tries;
       }while(tries<0);
       
       for(i=0;i<tries;i++)
       {
        p=&guess;
        std:: cout<< "ingrese el numero que cree que es el correcto: "<<endl;
        std:: cin>> *p;
        if(guess==correct)
        {
            cout<< "Adivinaste!!"<<endl;
            break;
        }
       else
        cout<<"intenta devuelta :(" <<endl;
       }
       
       
        cout<<"Quieren jugar devuelta? Si: ingrese '1' / No: ingrese cualquier otro numero o caracter "<<endl;
        cin>>i;
        if(i==1)
            again=true;
        else
            again=false;
      

    }while (again == true);
    
    return 0;
    
}