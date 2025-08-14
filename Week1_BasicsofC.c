#include<stdio.h>
void main(){
    printf("Hello World!\n");                             
    int a;                                              
    printf("Enter value of a : ");    
    scanf("%d",&a);                                   
    printf(" the entered value of a is : %d\n", a);
    
    // // data types
    int b;
    char c;
    float d;
    double e;
    long f;
    short g;
    
    // Operators : 
    
    printf("Enter value of b :");     
    scanf("%d",&b);                                   
    printf(" the entered value of b is : %d\n", b);
    
    // Arithimatic Operators
    printf("The sum of %d and %d is %d\n",a,b,a+b);
    printf("The answer of %d - %d is %d\n",a,b,a-b);
    printf("The answer of %d * %d is %d\n",a,b,a*b);
    printf("The answer of %d / %d is %d\n",a,b,a/b);
    
    // Relational Operatos :
    if(a==b){
        printf("The number %d is equal to %d\n",a,b);
        
    }else{
        
        printf("The number %d is not equal to %d\n",a,b);
    }
    

    printf("Enter value of c :");     
    scanf("%d",&c);    

    // if/else statement
    if(c%2==0){
        printf("\nC: %d is a even number.\n",c);
    }   
    else{
        printf("\nc: %d is not a even number.\n",c);
    }

    // loops :
    // For loop :
    for (int i = 0; i < 3; i++)
    {
        printf("For loop iteration number : %d\n",i+1);
    }
    

    // while loop :
    int i=0;
    while(i<5){
        printf("while this is iteration number : %d\n",i+1);
        i++;
    }
    
    // do while loop : 
    int j=10;
    do{
        printf("do while this is iteration number : %d\n",j);
        
    }while(j<10);

}