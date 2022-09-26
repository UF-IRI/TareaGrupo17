//¿Que hace? Encontrar el num máximo entre n=2 números (n se puede cambiar)
#include "codigo1.h" 

int codigo1()
{
	int max;
	int n=2;

	int *N = new int[n];
    cout<<"Encontrar el maximo entre" << n << "numeros" << endl;
	for (int i = 0; i < n; i++)
	{
		std::cout << "Ingrese un número: ";
		std::cin>>N[i];
		if (N[i] > max || N[0])
		{
			max = N[i];
		}	
	}
	std::cout << "El numero Maximo es: " << max;
	delete []N;
	N = NULL;
	
	return 0;

}

