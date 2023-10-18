//write a program to make table of any number
#include<stdio.h>
int main(){
    int i,n;
    printf("enter the number :");
    scanf("%d",&n);
    
    
    for(i=10;i>=1;i--){
        printf("%d\n",n*i);
        
    }
    
    return 0;
}
