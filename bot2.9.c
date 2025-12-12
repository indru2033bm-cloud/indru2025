#include<stdio.h>

int main(){
    char a[20] = "Hello";
    char b[20];
    strcpy(b,a);
    printf("%s",b);
}