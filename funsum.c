//write a program sum of two number and take input as a argument
#include<stdio.h>

int sum(int a,int b);
int main(){
    int a,b;
    printf("enter number a :");
    scanf("%d",&a);
    
    printf("enter number b:");
    scanf("%d",&b);
    
    int s= sum(a,b);
    printf("%d\n",s);
    
}
int sum(int a, int b){
                     return a+b;
}
    
  
