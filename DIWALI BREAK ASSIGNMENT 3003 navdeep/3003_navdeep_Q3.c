#include<stdio.h>
int main(){
    printf("Navdeep Singh Sidhu 3003\n");
    int a,b,c;
    printf("Enter the x-coordinate of the left bottom vertex\n");
    scanf("%d",&a);
    printf("Enter the y-coordinate of the left bottom vertex\n");
    scanf("%d",&b);
     printf("Enter the length of a side\n");
    scanf("%d",&c);
    printf("the centre of the room is at(%d,%d)",a+c/2,b+c/2);
    return 0;

}