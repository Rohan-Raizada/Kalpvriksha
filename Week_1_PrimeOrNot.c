#include<stdio.h>

char PrimeOrNot(int n){
    if(n <= 1) return 'N';

    for(int i = 2; i <= n / 2; i++){
        if(n % i == 0){
            return 'N';
        }
    }
    return 'Y';
}

int main(){
    int b;
    printf("Enter the value of b : ");
    scanf("%d",&b);
    printf("\nThe entered number to check if it is prime or not is : %d",b);
    if(PrimeOrNot(b)=='N'){
        printf("\n%d is not a prime number.\n",b);
    }
    else{
        printf("\n%d is a prime number.\n",b);
    }
    return 0;
}