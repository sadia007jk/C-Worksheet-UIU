#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d", &n);

    printf("The odd numbers are : ");

    for(int i=1;i<=n;i++)
        {
            printf("%d ", 2*i);
             sum +=2*i;
        }

    printf("\nThe Sum of odd Natural Number upto 10 terms : %d",sum);
    return 0;

}