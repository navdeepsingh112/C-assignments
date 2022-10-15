#include <stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float d;
    printf("enter principle amount");
    scanf("%d",&a);
    printf("enter intrest rate in decimals");
    scanf("%f",&d);
    printf("enter nuber of times intrest is applied in the time period");
    scanf("%d",&b);
    printf("enter the time period");
    scanf("%d",&c);
    printf("compound intrest is %f",a*(float)pow(1+d/b,b*c)-a);
    return 0;
}
