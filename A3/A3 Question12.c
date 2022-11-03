#include <stdio.h>

int main()
{
    char check ='B';
    if((check > ='A')&& (check <= 'Z'))
    {
        printf("Upper\n");
    }
    else if((check > ='a')&& (check<= 'z'))
    {
        printf("Lower\n");
    }
    return 0;
}
