#include<stdio.h>
int main()
{int c,d,e;
printf("enter two numbers");
scanf("%d %d",&c,&d);
e=c;
c=d;
d=e;
printf("after interchanging  c= %d d=%d",c,d);
return 0;}