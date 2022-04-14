#include<stdio.h>
int main()
{
    float base,hight,area;
    printf("base=");
    scanf("%f",&base);

    printf("hight=");
    scanf("%f",&hight);

    area=0.5*base*hight;
    printf("%f\n",area);
    getch();
}
