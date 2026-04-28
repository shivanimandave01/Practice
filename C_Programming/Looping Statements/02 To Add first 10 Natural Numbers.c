#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0,Sum = 0;
    
    printf("\n First 10 Natural Numbers is :\n");
    
    for(Num = 1;Num <= 10;Num++)
    {
        printf("  %d",Num);
        
        Sum = Sum + Num;
    }
    printf("\n  The Sum is : %d",Sum);
    
    getch();
    return 0;
}