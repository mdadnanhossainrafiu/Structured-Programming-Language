#include<stdio.h>
int main()
{
    int num;
    scanf ("%d",&num);
    if (num % 2 == 0)
    {
        printf("divisible by 2\n");
    }
    if (num % 3 == 0)
    {
        printf("divisible by 3\n");
    }
    if (num % 5 == 0)
    {
        printf("divisible by 5\n");
    }
}
