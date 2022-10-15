#include <stdio.h>
#include<math.h>
int main()
{
    int a,c;
    printf("enter a integer");
    scanf("%d",&a);
    while(a){printf("%d",a%10); a=a/10;};
    return 0;
}