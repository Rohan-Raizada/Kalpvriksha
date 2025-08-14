#include<stdio.h>

void fibonacci(int n){
    int a=0;
    int b=1;
    if(n>=1){
        printf("%d ",a);
    }
    if(n>=2){
        printf("%d ",b);
    }
    for(int i=3;i<=n;i++){
        printf("%d ",a+b);
        int c=a+b;
        a=b;
        b=c;
    }
}

int main(){
    int a;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("\nThe entered number to find the fibonacci series is : %d\n",a);
    fibonacci(a);
    return 0;
}