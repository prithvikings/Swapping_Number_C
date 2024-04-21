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

//Swapping two numbers using pointer method with void

#include<stdio.h>
void swap(int *x,int *y){
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
    return;
}
int main(){
    int a;
    printf("Enter number a: ");
    scanf("%d",&a);
    int b;
    printf("Enter number b: ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("The swap value of a: %d\n",a);
    printf("The swap value of b: %d",b);
}

//Swapping of two number using int pointer method
#include<stdio.h>
int swap(int x,int y){
    int *p=&x;
    int *q=&y;
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;
    printf("The Swap value of a: %d\n",x);
    printf("The Swap value of b: %d",y);
}
int main(){
    int a;
    printf("Enter number a: ");
    scanf("%d",&a);
    int b;
    printf("Enter number b: ");
    scanf("%d",&b);
    swap(a,b);
}
