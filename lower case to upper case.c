#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    printf("input : \nlowercase %c\n",x);
    printf("lowercase ASCII value %d\n",x);
    //printf("output : \nuppercase %c\n",x-32);
    printf("output : \nuppercase %c\n",toupper(x));
    //printf("uppercase ASCII value %d\n",x-32);
    printf("uppercase ASCII value %d\n",toupper(x));
    return 0;
}
