#include <stdio.h>

int main()
{
    double profit ,cost_price, selling_price,percentage;
    printf("Enter your price");
    scanf("%lf %lf",&cost_price, &selling_price);
    if((selling_price - cost_price ) > 0)
    {
        printf("Profit\n");
    }
    else
    {
        printf("Loss\n");
    }
    percentage = (selling_price - cost_price) *100;
    printf("Percentage is %0.2f %\n",percentage);

    return 0;


}
