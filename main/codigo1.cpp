//¿Que hace? Encontrar el num máximo entre n números 
#include "codigo1.h" 

int codigo1()
{
	int max;
	int n;
	do
	{
		std::cout << "Ingrese la cantidad de números que desea comparar para saber cual es el mayor: "; std::cin >> n;
	} while (n < 1);


	int *N = new int[n];

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
}

