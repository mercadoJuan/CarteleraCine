#include<stdio.h>

int main(){
    int a=0;
    int b=0;

    printf("hello world!\n");
    printf("ingrese un valor para A: ");
    scanf("%d",&a);
    printf("\n");
    printf("ingrese un valor para B: ");
    scanf("%d",&b);

    printf("\n");
    printf(" *** LA SUMA DE A + B ES: %d + %d = %d",a,b, a+b);
    return 0;
    
}
