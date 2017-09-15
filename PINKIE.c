#include<stdio.h>
#include<conio.h>

int sum(int n)
{
    int sum=0,num;
    while(n>0)
    {
    num=n%10;
    n=n/10;
    if(num%2!=0)
    {
    sum+=num;
    }
    }
return sum;
}
void main()
{
    int n,s;
    clrscr();
    printf("Enter the number");
    scanf("%d",&n);
    s=sum(n);
    printf("sum=%d",s);
getch();
}
