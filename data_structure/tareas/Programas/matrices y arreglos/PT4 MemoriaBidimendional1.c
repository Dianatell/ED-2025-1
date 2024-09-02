//Alumna: Telllez Uribe Diana, Javier Solorio Regina
/*programa para leer Nombre del alumno, edad y calificacion, para cuando finaliza el programa este de
el promedio de las edades y promedios de las calificaciones*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int fila, cln = 3, i;
    int sumcal = 0, sumprom = 0;
    float promed = 0.0, promcal = 0.0;

    printf("Ingrese la cantidad de alumnos: ");
    scanf("%d", &fila);
    fflush(stdin);

    int **matriz=(int **)malloc(fila * sizeof(int *));
    for (i = 0; i < fila; i++) 
	{
        matriz[i]=(int *)malloc(cln * sizeof(int));
    }

    char **names=(char **)malloc(fila * sizeof(char *));
    for (i = 0; i<fila; i++) 
	{
        names[i] = (char *)malloc(25 * sizeof(char));
    }

    for (i = 0; i < fila; i++) 
	{
        printf("Nombre: ");
        fgets(names[i], 25, stdin);
        names[i][strcspn(names[i], "\n")] = '\0';

        printf("Edad: ");
        scanf("%d",&matriz[i][0]);
        printf("Promedio: ");
        scanf("%d", &matriz[i][1]);

        sumcal += matriz[i][0];
        sumprom += matriz[i][1];

        fflush(stdin);
    }

    printf("\n|Nombre|--------|Edad|-------|Promedio|\n");
    for (i = 0; i < fila; i++) 
	{
        printf("%s\t\t %d\t\t %d\n", names[i], matriz[i][0], matriz[i][1]);
    }

    promed = (float)sumcal / fila; 
    promcal = (float)sumprom / fila;
    printf("\nEl promedio de edad es: %.2f\n", promed);
    printf("El promedio de calificaciones es: %.2f\n", promcal);

    for (i = 0; i < fila; i++) 
	{
        free(matriz[i]);
        free(names[i]);
    }
    free(matriz);
    free(names);

    return 0;
}
