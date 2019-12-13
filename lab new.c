#include"stdio.h"
#include"conio.h"
int f(int x);
main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("%d",f(a));
    getch();
}
int f(int x)
{
    if(x<=0)
        return 0;
    else
        return f(x-1)+2;
}
