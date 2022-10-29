#include<stdio.h>
int main(){
    printf("Navdeep Singh Sidhu 3003\n");
    int a;
    printf("Age:");
    scanf("%d",&a);
    if (a>0 && a<=3){printf("TODDLER \nALLOWED");}
    else if(a>3 && a<=12){printf("JUNIOR \nALLOWED");}
    else if(a>12 && a<=17){printf("TEENAGER \nALLOWED");}
    else printf("NOT ALLOWED");
    return 0;

}