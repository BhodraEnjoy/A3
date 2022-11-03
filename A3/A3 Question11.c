#include<stdio.h>

int main()
{
    float sub1,sub2,sub3,sub4,sub5, total,percentage;

    printf("Enter mark");

    scanf("%f %f %f %f %f",&sub1,&sub2,&sub3,&sub4,&sub5);

    total = sub1+sub2+sub3+sub4+sub5;
    printf("Total mark id %0.2f\n", total);

    percentage = (total/500) *100;

    printf("percentage is %0.2f\n",percentage);


return 0;

}
