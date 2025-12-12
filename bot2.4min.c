#include<stdio.h>

int main(){
    int a[4] = {1,2,3,4};
    int min = a[3];
    for (int i = 0; i <4; i++)
    {
       if(a[i] < min)
       min = a[i];
    }
    printf("minium of number is :%d",min);
}