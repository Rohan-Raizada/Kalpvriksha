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
void palindrome(int n){
    int temp=revNum(n);
    if(temp==n){
        printf("\nThe entered number %d is a palindrome.\n",n);
    }
    else{
        printf("\nThe entered number %d is not a palindrome.\n",n);
    }
}

int main(){
    int a;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("\nThe entered number to find the palindrome or not is : %d\n",a);
    palindrome(a);
    return 0;
}