#include <stdio.h>
#include<math.h>
int main()
{
    int a,c;
    char b[]=" ";
    printf("enter a integer");
    scanf("%d",&a);
    sprintf(b,"%d\0",a);
    c=strlen(b);
    for(int i=c-1;i>=0;i--){printf("%c",b[i]);};
    return 0;
}