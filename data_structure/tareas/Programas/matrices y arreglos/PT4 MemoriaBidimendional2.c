//Alumna: Tellez Uribe Diana, Javier Solorio Regina
/*Cuando el usuario diguite un numero este se va a repetir n-veces dependiendo del numero que alla diguito el usuario,
si el usuario diguito 4, el 4 se repetira 4 veces y si diguito 0 este no se imprimira
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* getLine(void) 
{
    const size_t sizeIncrement = 10;
    char* buffer = malloc(sizeIncrement);
    char* currentPosition = buffer;
    size_t maximumLength = sizeIncrement;
    size_t length = 0;
    int character;
    if (buffer == NULL) 
	{ 
		return NULL; 
	}
    while (1) 
	{
        character = fgetc(stdin);
        if (character== '\n' || character == EOF) 
		{ 
			break; 
		}
        if (++length >= maximumLength) 
		{
            char *newBuffer=realloc(buffer,maximumLength += sizeIncrement);
            if (newBuffer == NULL) 
			{
                free(buffer);
                return NULL;
            }
            currentPosition = newBuffer+(currentPosition-buffer);
            buffer = newBuffer;
        }
        *currentPosition++ = character;
    }
    *currentPosition = '\0';
    return buffer;
}

int main() 
{
    char *cuenta;
    int **arreglo = NULL;
    int i,j,longitud;

    printf("Ingrese el número de cuenta: ");
    cuenta = getLine();

    if (cuenta == NULL) 
	{
        printf("Error al leer la entrada.\n");
        return -1;
    }
    longitud = strlen(cuenta);

    arreglo = (int **)malloc(longitud * sizeof(int *));
    if (arreglo == NULL) 
	{
        printf("Error al asignar memoria.\n");
        free(cuenta);
        return -1;
    }

    for (i = 0; i<longitud; i++) 
	{
        int repeticiones = cuenta[i]-'0';

        if (repeticiones > 0) 
		{
            arreglo[i] = (int *)malloc(repeticiones * sizeof(int));
            if (arreglo[i] == NULL) 
			{
                printf("Error al asignar memoria.\n");
                for (j = 0; j< i; j++) 
				{
                    free(arreglo[j]);
                }
                free(arreglo);
                free(cuenta);
                return -1;
            }

            for (j = 0; j<repeticiones; j++) 
			{
                arreglo[i][j]=cuenta[i]-'0';
            }
        } 
		else 
		{
            arreglo[i] = NULL;
        }
    }
    for (i = 0; i<longitud;i++) 
	{
        if (arreglo[i]!= NULL) 
		{
            for (j = 0; j<(cuenta[i]-'0'); j++) 
			{
                printf("| %d ",arreglo[i][j]);
            }
            printf("|\n");
        }
    }

    for (i = 0; i < longitud; i++) 
	{
        if (arreglo[i]!= NULL) 
		{
            free(arreglo[i]);
        }
    }
    free(arreglo);
    free(cuenta);

    return 0;
}
