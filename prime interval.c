#include<stdio.h>
int main()
{
int a,b,i,flag;
printf("enter a numbers: ");
scanf("%d %d",&a,&b);
printf(prime number between two numbers",a,b);
while(a<b)
{
flag=0;
for(i=2;i<=a/2;++i)
{
if(a%i==0)
{
flag=1;
break;
}
}
}
return 0;
getch();
}
