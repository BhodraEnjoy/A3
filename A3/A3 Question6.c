#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter your two number\n");
    scanf("%d %d", &num1, &num2);

    if(num1 > num2)
    {
        printf("Num1 is greater\n");
    }
    else if(num1 == num2)
    {
        printf("Both are Equal\n");
    }
    else
    {
        printf("Num2 is greater\n");
    }

    return 0;
}
