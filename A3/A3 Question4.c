#include<stdio.h>

int main()
{
    int num;

    printf("Enter your number\n");
     scanf("%d", &num);

     if((num & 1) == 1)
     {
         printf("number is Odd\n");
     }
     else
     {

         printf("Number is even\n");
     }

   return 0;
}
