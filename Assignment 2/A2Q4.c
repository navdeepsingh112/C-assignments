#include <stdio.h>

int main()
{
    int a,c;
    float b;
    printf("enter principle amount");
    scanf("%d",&a);
    printf("enter intrest rate in decimals");
    scanf("%f",&b);
    printf("enter time in years");
    scanf("%d",&c);
    printf("simple intrest = %f",a*b*c);

    return 0;
}
