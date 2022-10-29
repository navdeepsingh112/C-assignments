#include<stdio.h>
#include<math.h>
int main(){
    printf("Navdeep Singh Sidhu 3003\n");
    int a,b,c=0;
    printf("Enter the number\n");
    scanf("%d",&a);
    b=a*a;
    while(b){c++;
    b=b/10;};
    b=a*a;
    if (c%2==0){if (a==((int)pow(10,c/2))){printf("Not A Kaprekar number");}
    else if (a==b/((int)pow(10,c/2))+b%((int)pow(10,c/2))){printf("Kaprekar number");}
    else printf("Not aA Kaprekar Number");}
    else {if (a==((int)pow(10,c/2+1))){printf("Not A Kaprekar number");}
    else if (a==b/((int)pow(10,c/2+1))+b%((int)pow(10,c/2+1))){printf("Kaprekar number");}
    else printf("Not A Kaprekar Number");}
return 0;
}