#include<stdio.h>
int main(){
    printf("Navdeep Singh Sidhu 3003\n");
    int A,B,C;
    printf("Price of old scooter:\n");
    scanf("%d",&A);
    printf("Repair amount:\n");
    scanf("%d",&B);
     printf("Selling price:\n");
    scanf("%d",&C);
    printf("Gain percentage is %.2f",((float)(C-A-B))/(A+B)*100);
    return 0;

}