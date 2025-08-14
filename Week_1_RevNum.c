#include<stdio.h>
int revNum(int n){
    int temp=n;
    int rev=0;
    while(temp){
        rev=rev*10+(temp%10);
        temp=temp/10;
    }
    return rev;
}

int main(){
    int a;
    printf("Enter the value of a : ");
    scanf("%d",&a); 
    printf("\nThe entered number to find the reverse number is : %d\n",a);
    printf("\nThe reversed number of %d is %d\n",a,revNum(a));
    return 0;
}