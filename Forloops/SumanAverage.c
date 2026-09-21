#include<stdio.h>
int main()
{
    int n,sum=0,i;
    scanf("%d", &n);
   
    for( i=1;i<=n;i++)
    {
        sum +=i ;
    }
    
    float a= sum/(float)n;
    printf("The sum of %d no is: %d\nThe Average is: %f", n, sum, a);

    return 0;

}