#include<stdio.h>5
int main ()
{
    int i,j,n;
    printf ("enter the number n: ");
    scanf("%d",&n);
    for (i = 1 ; i <= n ; i++ )
    {
        for (j=n ; j >= i ; j-- )  //(j=n;j<=(6-i);j++);  (j=1;j<=(n-i+1);j++); (j=i;j<=n;j++);
        {
            printf("*");

        }
        printf("\n");
    }
    return 0;
}

