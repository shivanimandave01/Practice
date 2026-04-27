#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;
    
    printf("\n First 10 Natural Numbers are :\n");
    
    for(Num = 1;Num <= 10;Num++)
    {
        printf("  %d",Num);
    }
    getch();
    return 0;
}