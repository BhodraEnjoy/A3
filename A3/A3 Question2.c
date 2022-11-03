#include<stdio.h>

int main()
{
    int num;

    printf("Enter your number\n");
     scanf("%d", &num);

     if(num % 5 == 0)
     {
         printf("number is divisible by 5\n");
     }
     else
     {

         printf("Number is not divisible by 5\n");
     }

   return 0;
}
