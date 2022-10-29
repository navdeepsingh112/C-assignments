#include<stdio.h>
int main(){
    printf("Navdeep Singh Sidhu 3003\n");
    int a,s=0,ps=0,b,c,d=0;
    printf("Enter a Number:");
    scanf("%d",&a);
    b=a;
    while(b){
        s=s+b%10;
        b=b/10;\
    }
    printf("%d\n",s);
    b=a;
    if(b%2==0){
           // d=1;
            ps=ps+2;
            while(b%2==0){b=b/2;}
        }
    for(int i=3;i<b ;i=i+2){if (b%i==0){
            while(b%i==0){b=b/i;}
            d=i;
            while(d){ps=ps+d%10;
            d=d/10;}
           //d=1;
        
        }
    }
    if (b>2){d=b;
            while(d){ps=ps+d%10;
            d=d/10;}}
    printf("%d\n",ps);
    //if (d==0){ps=ps+b;}
    if(ps==s){printf("%d is a smith number",a);}
    else printf("%d Not a Smith number",a);
    return 0;

}