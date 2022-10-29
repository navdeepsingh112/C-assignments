#include<stdio.h>
int main(){
    printf("Navdeep Singh Sidhu 3003\n");
    int a,b;
    char n[50];
    printf("Enter the roll no of the student:\n");
    scanf("%d",&a);
    gets(n);//to flush out the value that is kept in the stack after scan f
    printf("Enter the name of student\n");
    gets(n);
    printf("Enter the marks of student\n");
    scanf("%d",&b);
    if (b>=90){printf("%d %s %d A",a,n,b);}
    else if (b>=80 && b<90){printf("%d %s %d B",a,n,b);}
    else if (b>=70 && b<80){printf("%d %s %d C",a,n,b);}
    else if (b>=60 && b<70){printf("%d %s %d D",a,n,b);}
    else if (b>=50 && b<60){printf("%d %s %d E",a,n,b);}
    else {printf("%d %s %d FAIL",a,n,b);}
    

}