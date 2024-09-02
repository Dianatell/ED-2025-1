//Alumna: Tellez Uribe Diana, Javier Solorio Regina
//matriz en diagonal
#include<stdio.h>
#include<conio.h>
#define n 3
#define m 4
main()
{
	int num,i,tam,j;
	printf("\nIngresa los numeros de la matriz: ");
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++ )
		{
			scanf("%d",&num);
			if(i==j)
			{
				printf("\n%d",num);
			}
		}
			
	}
	getch();
}

