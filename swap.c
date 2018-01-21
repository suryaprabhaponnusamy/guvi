#include<stdio.h>
int main(void)
{
int a,b;
printf("enter the values of and b: ");
scanf("%d%d",&a,&b);
{
a=a-b;
b=a+b;
a=b-a;
}
printf("before swapping%d",a,b);
printf("after swapping%d",a,b);
return 0;
}
