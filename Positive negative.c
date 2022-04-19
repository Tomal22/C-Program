#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number=");
    scanf("%d",&num);

    if(num>0)
        printf("Positive");
    else
        printf("Negative");
    getch();
}
