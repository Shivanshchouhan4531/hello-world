/write a program to find the sum of n number using recursion 
#include<stdio.h>
int sum(int n);
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    
    printf("sum is :%d",sum(n));
    
}
int sum(int n){ 
    if(n==0){
         return ;
     }
    int sumnm1=sum(n-1);
    int sumn=sumnm1+n;
    
    return sumn;
     
    
}
