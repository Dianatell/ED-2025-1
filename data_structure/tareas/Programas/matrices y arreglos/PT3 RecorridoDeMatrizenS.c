//Alumna: Tellez Uribe Diana, Javier Solorio Regina
//Recorrido de matris en forma de S
#include<stdio.h>
#include<stdlib.h>
#define n 6
#define m 4

int main()
{
    int i, j, mat[n][m];
    printf("Ingrese los numeros para la matriz:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &mat[i][j]);	
        }
    }

    for(i=0; i<n; i++)
    {
        if(i%2==0)
        {
            for(j=0; j<m; j++)
            {
                printf(" %d",mat[i][j]);
            }
        }
        else
        {
            for(j=m-1;j>=0;j--)
            {
                printf(" %d",mat[i][j]);
            }
        }
        putchar('\n');
    }
    return 0;
}
