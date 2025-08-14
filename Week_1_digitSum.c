#include<stdio.h>

int sumDigit(int n){
    int num=0;
    int temp=n;
    while(temp){
        num+=(temp%10);
        temp/=10;
    }
    return num;
}

int main(){
    int a;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("\nThe entered number to find the sum of all the digits is : %d",a);
    printf("\nThe sum of all the digits of %d is %d\n",a,sumDigit(a));
    return 0;
}