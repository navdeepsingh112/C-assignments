#include<stdio.h>
int main(){
    printf("Navdeep Singh Sidhu 3003\n");
    int a,b,c;
    printf("Enter the first value");
    scanf("%d",&a);
    printf("Enter the second value");
    scanf("%d",&b);
    printf("Enter the choice from the menu \n1.Additon\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&c);
    switch (c)
    {
        case 1:printf("The value after addition is %d",a+b);break;
        case 2:printf("The value after subtraction is %d",a-b);break;
        case 3:printf("The values after multiplication is %d",a*b);break;
        case 4:if (b==0){printf("division not possible");}
        else printf("The value after division is %f",((float)a)/b);
    }

    

}