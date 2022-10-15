#include<stdio.h>
int main()
{int c,d;
printf("enter two numbers");
scanf("%d %d",&c,&d);
c=c+d;
d=c-d;
c=c-d;
printf("after interchanging  c= %d d=%d",c,d);
return 0;}