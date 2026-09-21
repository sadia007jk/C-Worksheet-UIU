#include<stdio.h>
int main()
{
    int n,sum=0,i;
    scanf("%d", &n);
    printf("The first %d natural num is: \n", n);
    for( i=1;i<=n;i++)
    {
        printf("%d ", i);
        sum +=i ;
    }
  
    printf("\nThe Sum of Natural Number upto %d terms: %d", n, sum);
    return 0;

}