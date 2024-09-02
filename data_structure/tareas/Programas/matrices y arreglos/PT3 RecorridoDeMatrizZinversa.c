//Aluman:Tellez Uribe Diana, Javier Solorio Regina
//Recorrido de Z inversa
#include<stdio.h>
#define n 6
#define m 6

int main() 
{
    int i,j,in[n][m];
    printf("Ingrese los valores para la matriz de %dx%d:\n", n, m);

    for(i=0;i<n;i++) 
    {
        for(j=0;j<m;j++) 
        {
            scanf("%d",&in[i][j]);
        }
    }

    printf("\nMatriz en forma de Z invertida:\n");
    for (j=m-1; j>=0;j--) 
    {
        printf("%d\t",in[n-1][j]);
    }

    for (i=n-2;i>0;i--) 
    {
        printf("\n%d\t\n",in[i][m-i-1]);
    }

    for (j =m-1;j>=0;j--) 
    {
        printf("%d\t",in[0][j]);
    }
    return 0;
}

