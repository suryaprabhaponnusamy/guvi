#include<stdio.h>
int main()
{
int a[50],k,i,j,n,s=0;
printf("enter the no ofelements:  ");
scanf("%d",&n);
printf("enter the values: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the elements to be added: ");
scanf("%d",&k);
for(j=0;j<k;j++)
{
s=s+a[j];
}
printf("the sum of values",s);
return 0;
}
