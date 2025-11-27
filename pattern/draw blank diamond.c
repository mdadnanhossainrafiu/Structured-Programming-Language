#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1 ; i <= n ; i++)
    {
        for (j=1 ; j<= (n-i) ; j++)
        {
            printf(" ");
        }
        printf("*");
        for (j=1 ; j<= (2*i-3) ; j++)
        {
            printf(" ");
        }
        if (i != 1)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1 ; i<=(n-1) ; i++)
    {
        for(j=1 ; j<=i ; j++)
        {
            printf(" ");
        }
        printf("*");

        for (j=1 ; j<=(2*n-1-2*i) ; j++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }

}
