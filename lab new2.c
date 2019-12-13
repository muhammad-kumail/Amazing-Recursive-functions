#include<stdio.h>
#include<conio.h>
int sumofdigits(int x);
main()
{
    int n;
    printf("Enter no: ");
    scanf("%d",&n);
    printf("%d",sumofdigits(n));
    getch();
}
int sumofdigits(int x)
{
    if(x==0)
        return 0;
    else
    {
        return (sumofdigits(x/10)+x%10);
    }
}
