//Programa de recorrido Z
#include<stdio.h>
#define n 6
#define m 6

main()
{
    int i,j,in,prin=0,vero=0;
    printf("matriz en forma z: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&in);
            if(i==0)
            {
                printf(" %d\t",in);
            }
            if(i+j==m-1 && i!=0 && i!=n-1)
            {
                printf(" \n%d\t\n",in);
            }
            if(i==n-1)
            {
                printf("%d\t",in);
            }
        }

    }
    return 0;
}
