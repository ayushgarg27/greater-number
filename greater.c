#include<stdio.h>
int main(){
    int n1;
    int n2;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    if(n1>n2){                                   // using if/else statement
        printf("the greater number is: ");
        printf("%d", n1);
        printf("\n");
    }else{
         printf("the greater number is: ");
        printf("%d", n2);
        printf("\n");
    }
    int g = n1>n2? n1:n2;                     // using operator
    printf("the grater number is: ");
    printf("%d", g);
}