#include <stdio.h>

int main()
{

    int num;

    printf("Enter your number\n");
     scanf("%d", &num);

     if(num > 99 & num < 1000)
     {
         printf("number is a three digit number\n");
     }
     else
     {
           printf("number is not a three digit number\n");
     }
     return 0;
}
