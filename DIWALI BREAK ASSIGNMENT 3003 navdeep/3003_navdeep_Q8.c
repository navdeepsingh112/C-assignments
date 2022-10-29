#include<stdio.h>
int main(){
    printf("Navdeep Singh Sidhu 3003\n");
    int a,b;
    float c;
    char s[50];
    printf("Enter the user id os user:\n");
    scanf("%d",&a);
    gets(s); //some values remained in the stack so used this to flush them out
    printf("Enter the name of user:\n");
    gets(s);
    printf("Enter the number of units consumed by the user\n");
    scanf("%d",&b);
    if (b<=100){
        c=b;
    }
    else if (b>100 && b<=300){
        c=b*2;
    }
    else {
        c=b*3;
        if (c>1000){
            c=c+0.15*c;
        }
    }
    printf("%d %s %.2f",a,s,c);
    return 0;

}