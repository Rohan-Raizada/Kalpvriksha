#include<stdio.h>
int main(){
    int target=5;
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]+arr[j]==target){
                printf("there are %d and %d whose sum is equal to %d\n", arr[i],arr[j], target);
                break;
            }
        }
    }
    return 0;
}