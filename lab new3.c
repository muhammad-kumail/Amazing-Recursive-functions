#include<stdio.h>
#include<conio.h>
int C(int n,int r)
{
    if(n==r||r==0)
        return 1;
    else if(n>=1&&r>=1)
        return C(n-1,r)+C(n-1,r-1);
}
main()
{
    int n,r;
    printf("Enter n & r: ");
    scanf("%d%d",&n,&r);
    printf("%d",C(n,r));
    getch();
}
