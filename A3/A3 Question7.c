#include<stdio.h>

int main()
{
    double a,b,c, discriminant, root1,root2,realPart,imgePart;
    printf("Enter coefficients a,b and c :");
    scanf("%lf %lf %lf", &a,&b,&c);

    discriminant = b * b - 4 * a * c;

    if(discriminant > 0)
    {
        printf("Real and discriminant\n");
    }
    else if (discriminant == 0)
    {

        printf("Real and different\n");
    }
    else
    {
        printf("Real are not real \n");
    }

  return 0;

}
