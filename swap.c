//Swapping two numbers using 3rd container
#include<stdio.h>
int main(){
    int a;
    printf("Enter number a: ");
    scanf("%d",&a);
    int b;
    printf("Enter number b: ");
    scanf("%d",&b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("The swap value of a: %d\n",a);
    printf("The swap value of b: %d",b);
}

//Swapping two numebrs using without 3rd container
#include<stdio.h>
int main(){
    int a;
    printf("Enter number a: ");
    scanf("%d",&a);
    int b;
    printf("Enter number b: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The swap value of a: %d\n",a);
    printf("The swap value of b: %d",b);
}
