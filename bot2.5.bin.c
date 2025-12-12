#include<stdio.h>

int main(){
    int arr[ ] = {10,20,30,40,50};
    int n = 5;
    int key;
    printf("Enter element to search :");
    scanf("%d",&key);
    for(int i = 0;i< n;i++){
        if(arr[i]==key){
            printf("Element is founded at index %d",i);
            break;
        }
        if( i == n){
            printf("Element is not found");
        }
    }
    return 0;
}