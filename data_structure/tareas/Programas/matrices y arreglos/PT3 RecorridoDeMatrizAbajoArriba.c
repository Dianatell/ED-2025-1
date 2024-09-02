//Alumna: Tellez Uribe Diana, Javier Solorio Regina
//matriz d-i abajo hacia arriba
#include<stdio.h>

#define n 3
#define m 4
main()
{
    int i,j, num[n][m],ene,mas=0;
    printf("La matriz recorrido al reves");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&num[i][j]);
        }

    }	

    for(i=n-1; i>=0; i--)
    {
        for(j=m-1; j>=0; j--)
        {
            printf(" %d\t",num[i][j]);
        }
        printf("\n");
    }
    return 0;
}

