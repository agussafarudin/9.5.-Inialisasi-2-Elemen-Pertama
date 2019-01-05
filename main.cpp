#include<conio.h>
#include<stdio.h>
int main()
{
    int bil{7};
    for (int i=0;i<7;i++)
    {
        printf("Elemen ke - %i = %d\n",i,bil{i});
    }
    getch();
    return 0;
}
