#include<stdio.h>

int factorial(int n){
    if(n==1 || n==0)return 1;
    return n*factorial(n-1);
}
int main(){
    int a;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("\nThe entered number to find the factorial is : %d",a);
    printf("\nThe factorial of %d is %d\n",a,factorial(a));
    return 0;
}