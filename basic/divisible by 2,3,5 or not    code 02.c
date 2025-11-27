#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("dibisible by 2.\n");

    }
    else if (num%3==0)
    {
        printf("divisible by 3.\n");

    }
    else if (num%5==0)
    {
        printf("divisible by 5.\n");
    }
    else
    {
        printf("none.\n");
    }
    return 0;
}
