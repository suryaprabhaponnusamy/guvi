#include<stdio.h>
int main()
{
int i,n,fact=1;
printf("enter an integer: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("%d is a factorial number",fact);
return 0;
}
