//Alumna: Tellez Uribe Diana, Javier Solorio Regina
/*El número de cuenta es 424132486 nuestro ultimo número es 6, entonces la posicion que vamos a modificar
sera [0][6] que le corresponde al valor 14*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int i;
    int *pv = (int*) malloc(20 * sizeof(int)); 
    if (pv == NULL) 
	{
        printf("Error al asignar memoria.\n");
        return 1;
    }

    for (i=2; i < 20; i+=2) 
	{
        	pv[i]=i+2;

    }

	if(6<20)
	{
		pv[14]=-1;
	}
	
    for (i=2; i < 20; i+=2) 
	{
        printf("%d ", pv[i]);
    }
    printf("\n");

    free(pv);

    return 0;
}
