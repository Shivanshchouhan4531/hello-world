//write a program using funcation to find the factorial of n numbers
#include<stdio.h>
int fact(int n);
int main(){

    int n;
    printf("enter any number:");
    scanf("%d",&n);
    
    printf("factorial is :%d\n",fact(n));
    
    
}
int fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial= factorial*i;
    }
    return (factorial);
}
