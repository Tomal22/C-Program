#include<stdio.h>
int main()
{
    int num1,num2,num3,sum;float avg;
    printf("enter three numbers=");
    scanf("%d%d%d",&num1,&num2,&num3);
    sum=num1+num2+num3;
    printf("the sum is=%d\n",sum);

    avg=(float)sum/2;
    printf("avg=%f\n",avg);
    getch();

}
