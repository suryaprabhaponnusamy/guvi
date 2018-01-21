#include<stdio.h>
int main()
{
char n;
printf("enter the string: ");
scanf("%s",&n);
if((n>=65&&n<=90)||(n>=97&&n<=122))
{
printf("the string is not numeric");
}
else
{
printf("the string is numeric");
}
return 0;
}


