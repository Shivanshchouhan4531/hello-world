//write a program to find the factorial of n number using recursion 
#include<stdio.h>
int fact(int n);
int main(){
    int n;
    printf("enter any number:");
    scanf("%d",&n);
    
    printf("facorial is :%d\n",fact(n));
}
int fact(int n){ 
    if(n==1){  //base condition
        return ;
    }
            int factnm1=fact(n-1); // recursive
            int factn= factnm1*n;
            
    return factn;
    
}
