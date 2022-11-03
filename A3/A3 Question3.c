#include<stdio.h>

int main()
{
    int num;

    printf("Enter your number\n");
     scanf("%d", &num);

     if(num % 2 == 0)
     {
         printf("number is even\n");
     }
     else
     {

         printf("Number is odd\n");
     }

   return 0;
}

