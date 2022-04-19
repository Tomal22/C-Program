#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any letter=");
    scanf("%c",&ch);

    if(ch>'a'&& ch<='z')
        printf("small letter");

   else if(ch>='A'&& ch<='Z')
        printf("capital letter");

    else
        printf("not a letter");
    getch();
}
