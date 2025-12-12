#include<stdio.h>

int main(){
    int a[] = {10,20,30,40,50};
    int n = 5;
    int data, l = 0,r = n-1,mid;
    printf("Enter element to search :");
    scanf("%d",&data);
    mid = (l + r)/2;
if(data == a[mid]);{
    printf("Element found at index :%d",mid);
    return 0;
}
else if(data < a[mid]){
    r = mid - 1;
    }
    else{
        l = mid + 1;
    }
}