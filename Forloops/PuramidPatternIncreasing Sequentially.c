#include<stdio.h>
int main()
{
    int rows,spc,i,j,k,t=1;
    scanf("%d", &rows);

    spc = rows+4-1;

    for( i=1;i<=rows;i++)
        {
            for(k=spc;k>=1;k--)
            {
                printf(" ");
            }
             for(j=1;j<=i;j++)
            {
                 printf("%d ",t++);
            }

        printf("\n");
        spc--;
        }
    return 0;
}