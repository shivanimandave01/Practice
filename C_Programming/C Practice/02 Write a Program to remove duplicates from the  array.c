#include<stdio.h>
#include<conio.h>

void deleteDuplicate(int Size,int *sptr);
void Display(int Size,int *sptr);

int main()
{
    int Size = 0,i =0;
    printf("\n How Many Numbers Stores in An Array :");
    scanf("%d",&Size);

    int Numbers[Size];

    for(i = 0;i < Size;i++)
    {
        printf("Enter %d Number : ",i+1);
        scanf("%d",&Numbers[i]);
    }

    Display(Size,Numbers);
    deleteDuplicate(Size,Numbers);
    Display(Size,Numbers);

    getch();
    return 0;
}

void Display(int Size,int *sptr)
{
    printf("\n");

    for(int i = 0;i < Size;i++)
    {
        if(sptr[i] != 0)
        {
            printf("\n %d",sptr[i]);
        }

    }
}
void deleteDuplicate(int Size,int *sptr)
{

    for(int i = 0;i < Size;i++)
    {
        for(int j = 0; j < Size;j++)
        {
            if(sptr[i] == sptr[j] && i != j)
            {
                sptr[j] = 0;
            }

        }
    }
}
