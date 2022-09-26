//¿Que hace? Encontrar el num máximo entre 2 números pasados por parametro
#include "codigo1.h" 
using namespace std;
int codigo1(int num1, int num2)
{
		if (num1>num2) //si el num1 es mayor al num2
			return num1;
		else
			return num2;
}

