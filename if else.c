#include<stdio.h>
int main()
{
    int num;
    printf("enter an integer=");
    scanf("%d",&num);

    if(num%2==0)
    printf("Even\n");

    else
    printf("Odd\n");
    getch();
}
