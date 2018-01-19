#include<stdio.h>
int main()
{
int num,m=10,n=40;
printf("even number in a given range");
scanf("%d",&num);
for(num=m;num<=n;num++)
{
if(num%2==0)
{
printf("%d",num);
}
return 0;
getch();
}
