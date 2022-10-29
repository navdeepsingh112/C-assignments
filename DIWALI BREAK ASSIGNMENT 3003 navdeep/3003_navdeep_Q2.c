#include<stdio.h>
int main(){
    printf("Navdeep Singh Sidhu 3003\n");
    int a,b;
    printf("Number of students\n");
    scanf("%d",&a);
    printf("Number of teams\n");
    scanf("%d",&b);
    printf("The number of students in each team is  %d and left is  %d",a/b,a%b);
    return 0;

}