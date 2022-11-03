#include<stdio.h>

int main()
{
    int num;

    printf("Enter your number\n");
     scanf("%d", &num);

     if(num > 0)
     {
         printf("Number is positive\n");
     }
     else if(num < 0)
     {
         printf("Number is non positive\n");
     }
     else
     {

         printf("Number is Zero\n");
     }

   return 0;
}
