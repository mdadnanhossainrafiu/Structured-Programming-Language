#include<stdio.h>
int main()
{
    int y;
    printf("enter the value of y: ");
    scanf("%d",&y);

    if (y%400==0 || y%4==0)
    {
        printf("Leap Year.\n");
    }
    else if (y%100 == 0)
    {
        printf("Not Leap Year.\n");
    }
    else
    {
        printf("Not Leap Year.\n");
    }
    return 0;
}
