
#include<stdio.h>

int main()
{
    int a = 22, b = 20, c = 10;

    if( (a > b) && (a > c) )
    {

        printf("%d is greatest\n");
    }
    else if((b > a) && (b > c))
    {
        printf("%d is greatest\n");
    }
    else if((a == b) ||(b == c) || (a == c))
    {
        printf("Greatest number is repeated");
    }
    return 0;
}
