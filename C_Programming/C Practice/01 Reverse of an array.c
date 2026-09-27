#include<stdio.h>
#include<conio.h>
#define Size 5

int main()
{
    int No[Size] = {},i = 0,Num = 0;

    for(i = 0;i <= Size;i++)
    {
        printf("\n Enter %d Number :",i+1);
        scanf("%d",&No[i]);
    }
    for(i = Size;i >= 0;i--)
    {

            Num = No[i];

            printf(" %d",Num);

    }

    getch();
    return 0;
}
