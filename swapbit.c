#include<stdio.h>
int main(void)
{
int a,b;
printf("enter the values of a and b: ");
scanf("%d%d",&a,&b);
a=a^b;
b=a^b;
a=b^a;
printf("before swapping%d",a);
printf("after swapping%d",b);
return 0;
}
